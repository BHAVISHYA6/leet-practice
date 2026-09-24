class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i =0 ; i<nums.size(); i++){
            int copy = nums[i];
            int cnt = 0;
            while(copy > 0){
                cnt += copy % 10;
                copy /= 10;
            }
            if(cnt == i){
                return i;
            }
        }
        return -1;
        
    }
};