class Solution {
public:
    int f(vector<int>& nums, int k){
        if(k < 0) return 0;
        int r =0 , l =0 , sum =0 , cnt =0;
        while(r < nums.size()){
            if(nums[r] % 2== 1){
                sum += 1;
            }
            while(sum > k){
                if(nums[l]%2 == 1){
                    sum--;
                }
                l++;
            }
            cnt += (r- l+1);
            r++;
        }
        return cnt ;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return f(nums , k) - f(nums , k-1);
    }
};