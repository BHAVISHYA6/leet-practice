class Solution {
public:
    int rec(int ind , vector<int>& nums, vector<int> &dp){
        if(ind == 0) return nums[0];
        if(ind < 1) return 0 ;
        if(dp[ind] != -1) return dp[ind];
        int take = nums[ind] + rec(ind-2 , nums , dp);
        int skip = rec(ind -1 , nums , dp);
        return dp [ind] = max(take , skip);
        
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        vector<int> dp(nums.size() , -1);
        return rec(nums.size()-1 , nums,dp);
        // return max(rec(nums.size()-1,nums),rec(nums.size()-2 , nums));
        
    }
};