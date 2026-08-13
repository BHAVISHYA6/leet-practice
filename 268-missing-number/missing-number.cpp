class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i = 0 ; i<= nums.size() ; i++){
            bool flag = false;
            for(int j=0 ;j <nums.size(); j++ ){
                if(nums[j] == i) flag = true;
            }
            if(!flag) return i;
        }
        return -1;
    }
};