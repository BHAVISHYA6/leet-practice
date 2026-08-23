class Solution {
public:
    bool possible(vector<int>& bloomDay,int day, int m, int k){
        int cnt =0 , nb =0;
        for(int i =0 ; i<bloomDay.size(); i++){
            if(bloomDay[i] <= day){
                cnt++;
            }else{
                nb += (cnt/k);
                cnt =0;
            }
        }
        nb += cnt/k ;
        if(nb >= m) return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin() , bloomDay.end());
        int high = *max_element(bloomDay.begin() , bloomDay.end());
        int ans = -1;
        while(low <= high){
            long long mid = (low+high)/2;
            if(possible(bloomDay , mid , m , k) == true){
                ans = mid ;
                high = mid -1;

            }else{
                low = mid+1;
            }
        }
        return ans;
        
    }
};