class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int inscore = INT_MAX;
        int index = -1;
        for(int i =0 ; i < nums.size() ; i++){
            int maxi = INT_MIN;
            int mini = INT_MAX;
            for(int j = 0 ; j <= i ; j++){
                if(maxi < nums[j]) maxi = nums[j];
            }
            for(int l = i ; l < nums.size(); l++){
                if(mini > nums[l]) mini = nums[l];
            }
            if((maxi - mini) <= k){
                return i;
                }
            }

        
        return -1;
    }
};