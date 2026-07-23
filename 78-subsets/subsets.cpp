class Solution {
public:
    vector<vector<int>> ans ;
    vector<int> curr;
    void rec(int start ,vector<int>& nums ,vector<int> &curr, vector<vector<int>> &ans){
        if(start == nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[start]);
        rec(start+1 , nums , curr ,ans);
        curr.pop_back();
        rec(start+1 , nums , curr ,ans);        
   }
    vector<vector<int>> subsets(vector<int>& nums) {

    rec(0, nums ,curr ,ans);
    return ans ;
    }
};