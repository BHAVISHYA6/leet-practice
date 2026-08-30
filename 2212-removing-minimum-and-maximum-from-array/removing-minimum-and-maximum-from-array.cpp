class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX , maxi = INT_MIN;
        int mini_ind =0 , maxi_ind =0;
        for(int i =0 ; i < nums.size(); i++){
            if(nums[i] < mini){
                mini = nums[i];
                mini_ind = i;
            }
            if(nums[i] > maxi) {
                maxi = nums[i];
                maxi_ind = i;
            }
        }
        int left = min(mini_ind , maxi_ind);
        int right = max(mini_ind , maxi_ind);

        int ans1 = right+1;
        int ans2 = n - left ;
        int ans3 = (left+1) + (n- right);
        return min({ans1 ,ans2 , ans3});

        
        
    }
};