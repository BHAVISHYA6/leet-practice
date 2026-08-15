class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        bool nz = false;
        int x =0 ;
        for(int i =0 ; i<nums.size() ; i++){
            x = x^nums[i];

            if(nums[i] != 0) nz = true;
        }
        if( x != 0) return nums.size() ;
        if( x == 0 && nz == true) return nums.size() - 1;
        return 0;
    }
};