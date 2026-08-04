class Solution {
public:
     void rec(int index , vector<int>& nums, vector<int> &ans , int maxi , int mini){
        if(index == nums.size()) {
            return ;
        }
        while(mini < nums[index]){
            ans.push_back(mini);
            mini++;
        }
        
        rec(index +1, nums , ans , maxi , mini+1);
     }
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin() , nums.end());
        rec(0 , nums , ans , nums[nums.size() -1] , nums[0]);
        return ans;
    }
};