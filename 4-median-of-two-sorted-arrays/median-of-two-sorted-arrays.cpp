class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int cnt =0 , n = nums1.size() , m = nums2.size();
        int prev =0 , curr = 0,  mid = (n+m)/2 , i=0 , j= 0;
        while(cnt <= mid){
            prev = curr;
            if(i < n &&( j>= m || nums1[i] <= nums2[j])){
                curr = nums1[i];
                i++;
                 
            }else{
                curr = nums2[j];
                j++;
                
            }
            cnt++;
        }

        if((n + m)%2 == 0) return ((double)prev+curr)/2;
        return curr;

    }
};