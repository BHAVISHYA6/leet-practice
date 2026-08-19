class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(k == nums.size()){
            return *max_element(nums.begin(), nums.end());
        }
        else if(k == 1){
            unordered_map<int, int> mp;
            for(int i =0 ; i <nums.size() ; i++){
                mp[nums[i]]++;
            }
            int ans = -1;
            for(auto it:mp){
            if(it.second == 1){
                ans = max(ans, it.first);
            }
            }
            return ans;

        }
        else{
        int a =  nums[0];
        int b = nums[nums.size() -1];
        if(a==b) return -1;
        bool af = false;
        bool bf = false;
        for(int i = 1 ; i< nums.size() -1 ; i++){
            if(nums[i] == a) af = true;
            if(nums[i] == b) bf = true;
        }
        if(!af && !bf) return max(a, b);
        else if(af && bf) return -1;
        else{
            if(!af && bf) return a;
            else return b;
        }
        }
        return -1;
    }
};