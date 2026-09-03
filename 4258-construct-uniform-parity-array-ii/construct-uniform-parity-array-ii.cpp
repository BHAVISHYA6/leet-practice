class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int oddc =0 , evenc = 0;
        bool fails = true;
        sort(nums1.begin(), nums1.end());
      for(int i =0 ; i< nums1.size(); i++){
            if(nums1[i] %2 == 0){
                if(oddc == 0) {
                    fails = false;
                }
                evenc++;
            }else{
                oddc++;
            }
      }  
      if(oddc == nums1.size() || evenc == nums1.size()) return true;
      if(fails == true){
        return true;
      }
      return false;
    }
};