class Solution {
public:
    void rec(int index ,vector<int> &curr ,vector<int>& candidates,vector<vector<int>> &ans, int target ){
        if(index == candidates.size()){
            if(target == 0){
                ans.push_back(curr);
                return;
            }
            return;
        }
    if(candidates[index] <= target){
        curr.push_back(candidates[index]);
        rec(index, curr ,candidates , ans , target - candidates[index]);
        curr.pop_back();
    }
    
    rec(index+1, curr ,candidates , ans , target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        vector<vector<int>> ans;
        rec(0 , curr , candidates , ans ,target);
        return ans;

    }
};