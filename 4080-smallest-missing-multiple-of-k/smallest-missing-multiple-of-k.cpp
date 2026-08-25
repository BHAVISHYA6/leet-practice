class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int cnt =1 ;
        for(int i=0 ; i< nums.size(); i++){
            if((cnt*k) == nums[i]){
            cnt++;
            }
        }
        return cnt*k;
    }
};