class Solution {
public:
     void rec(int start ,vector<int> &curr , vector<vector<int>> &ans , vector<int> nums){
       if(true) ans.push_back(curr);
        for(int i = start ; i<nums.size() ; i++){
            if(i > start && nums[i] == nums[i-1]) continue ;
            curr.push_back(nums[i]);
            rec(i+1 , curr, ans , nums);
            curr.pop_back();
        }
     }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr ;
        sort(nums.begin(), nums.end());
        rec(0 , curr, ans , nums);
        return ans;
        
    }
};