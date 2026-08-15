class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int longest = 1;
        int cntcurr = 0 ;
        int lastsmaller = INT_MIN;
        if(nums.size() == 0) return 0;
        for(int i =0 ; i<nums.size() ; i++){
            if(nums[i]-1 == lastsmaller){
                cntcurr++;
                lastsmaller = nums[i];
            }else if(nums[i] != lastsmaller){
                lastsmaller = nums[i];
                cntcurr =1;
            }
            longest = max(longest , cntcurr);
        }
        return longest;
        
    }
};