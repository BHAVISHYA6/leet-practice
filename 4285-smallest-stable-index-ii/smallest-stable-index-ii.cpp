class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());
        int maxi = INT_MIN;
        for(int i =0 ; i<nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
            prefix[i] = maxi;
        }
        int mini = INT_MAX;
        for(int i = nums.size() -1 ; i>=0 ; i--){
            if(nums[i] < mini){
                mini = nums[i];
            }
            suffix[i] = mini;
        }
        for(int i = 0 ; i<nums.size(); i++){
            if(prefix[i] - suffix[i] <= k){
                return i;
            }
        }
        return -1;
        
    }
};