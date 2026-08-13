class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        int p1 = nums[0];
        int p2 =0 ;
        for (int ind = 1; ind < nums.size(); ind++) {
            int take = nums[ind];
            if(ind >1) take+= p2;
            int skip = p1;
            int curr = max(take, skip);
            p2 = p1;
            p1 = curr;
        }
        return p1;
    }
};