class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
       int mini = *min_element(nums.begin(), nums.end());
       int maxi = *max_element(nums.begin(), nums.end());
       for(int i = mini ; i<= maxi ; i++){
            bool found = false;
            for(int x :nums){
                if(x == i){
                    found = true;
                    break;
                }
            }
            if(found == false){
                ans.push_back(i);
            }
         
       } 
       return ans;
    }
};