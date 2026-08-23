class Solution {
public:
    int f(vector<int>& weights, int days, int index){
        int subs =0, cnt =0 ;
        for(int i = 0 ; i< weights.size(); i++){
            if(subs+ weights[i] > index){
                cnt++;
                subs = weights[i];
            }else{
            subs += weights[i];
            }
        }
        if(cnt+1 <=days) return 1;
        return -1;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = *max_element(weights.begin(), weights.end());
        int sum =0 ;
        for(int i =0 ; i< weights.size(); i++){
            sum += weights[i];
        }
        int low = maxi , high = sum;
        int ans =0 ;
        while(low <= high){
            int mid = (low + high)/2;
            if(f(weights,days, mid) == 1){
                high = mid -1;
                ans = mid ;
            }
            else {
                low = mid+1;
            }
        }
    return ans;   
    }
};