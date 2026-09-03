class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            int maxi = nums1[i];
            int ind = 0;
            for (int k = 0; k < nums2.size(); k++) {
                if (nums2[k] == nums1[i]){
                    ind = k;
                    break;
                }
            }
            for (int j = ind; j < nums2.size(); j++) {
                if (nums2[j] > maxi) {
                    maxi = nums2[j];
                    ans.push_back(nums2[j]);
                    break;
                }
            }

            if (maxi == nums1[i])
                ans.push_back(-1);
        }
        return ans;
    }
};