class Solution {
public:
     void rec(vector<int> &curr, vector<vector<int>> &ans ,vector<int> nums , vector<int> &freq){
        if(curr.size() == nums.size()){
            ans.push_back(curr);
            return;
        }
        for(int i = 0 ; i< nums.size() ; i++){
            if(freq[i] == 0){
                curr.push_back(nums[i]);
                freq[i] =1;
                rec(curr, ans , nums, freq);
                curr.pop_back();
                freq[i] =0;
            }

        }
     }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> ans; 
        vector<int> freq(nums.size() , 0);
        rec(curr ,ans , nums,freq);
        return ans;

        
    }
};