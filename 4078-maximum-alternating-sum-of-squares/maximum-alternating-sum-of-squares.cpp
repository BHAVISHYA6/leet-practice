class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(),[](int &a ,int &b){
            return abs(a) < abs(b);
        });
        int n =  nums.size();
        long long psum = 0 ;
        for(int i = n-1 ; i >= 0 ; i--){
            if(i >= n/2) psum += nums[i]*nums[i];
            else psum -= nums[i]*nums[i];
        }
        return psum;

    }
};