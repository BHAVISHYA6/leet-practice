class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        dp[0] = nums[0];
        for (int ind = 1; ind < nums.size(); ind++) {
            int take = nums[ind];
            if(ind >1) take+= dp[ind-2];
            int skip = dp[ind - 1];
            dp[ind] = max(take, skip);
        }
        return dp[nums.size() - 1];
    }
};