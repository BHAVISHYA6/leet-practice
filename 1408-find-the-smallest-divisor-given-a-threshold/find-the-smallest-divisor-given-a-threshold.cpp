class Solution {
public:
    int f(vector<int>& nums, int threshold , int index){
        int sumd =0 ;
        for(int i =0 ; i< nums.size(); i++){
            sumd+= (nums[i] + index-1) / index;
        }
        if(sumd <= threshold) return 1;
        return 0;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1,ans =0;
        int high = *max_element(nums.begin(), nums.end());
        while(low <= high){
            int mid = (low + high)/2;
            if(f(nums, threshold , mid) == 1){
                ans = mid;
                high = mid -1;
            }else{
                low = mid+1;
            }
        }return ans;
    }
};