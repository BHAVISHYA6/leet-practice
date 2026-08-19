class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxlen = 0 ; 
        int currlen =0;
        int left = 0 ;
        int right =0;
        for(int i =0 ; i< nums.size(); i++){
            if(nums[i] != 1){
                currlen = right-left;
                maxlen = max(currlen , maxlen);
                right = i+1;
                left = i+1;
            }
            else{
                right++;
            }
        }
        currlen = right - left;
        maxlen = max(maxlen , currlen);
        return maxlen;
        
    }
};