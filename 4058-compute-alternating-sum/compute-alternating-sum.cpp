class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int evens = 0 ;
        int odds = 0;
        for(int i =0 ; i<nums.size(); i++){
            if(i%2 == 0) evens +=nums[i];
            else{
                odds += nums[i];
            }
        }
        return evens - odds;
    }
};