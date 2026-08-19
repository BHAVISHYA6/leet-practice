class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxlen =0 , currlen =0 ;
        for(int i  =0 ; i< nums.size() ; i++){
            if(nums[i] ==1){
                currlen++;
                maxlen = max(maxlen , currlen);
            }else{
                currlen =0 ;
            }
        }
        return maxlen;
    }
};