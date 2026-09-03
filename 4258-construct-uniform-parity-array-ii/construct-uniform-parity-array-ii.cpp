class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = INT_MAX, evenc =0 , oddc =0;
        for(int i =0 ; i< nums1.size(); i++){
            if(nums1[i]%2 == 0) evenc++;
            else oddc++;
            if(nums1[i] < mini) mini = nums1[i];
        }
        if(oddc == nums1.size() || evenc == nums1.size()) return true;
        if(mini %2 == 1) return true;
        return false;
    }
};