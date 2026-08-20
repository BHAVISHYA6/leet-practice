class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums1;
        vector<int> nums2;
        int left = 0 ;
        int right =0 ;
        nums1.push_back(nums[0]);
        nums2.push_back(nums[1]);
        int currind = 2;
        while(currind != n){
            if(nums1[left] > nums2[right]){
                nums1.push_back(nums[currind]);
                currind++;
                left++;
            }else{
                nums2.push_back(nums[currind]);
                currind++;
                right++;
            }
        }
        for(int i = 0 ; i<=right ; i++){
            nums1.push_back(nums2[i]);
        }
        return nums1;
    }
};