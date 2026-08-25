class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        for(int i =0 ; i< nums.size(); i++){
            mp[nums[i]]++;
        }
        bool flag = true;
        int cnt = 1;
        while(flag){
            if(mp.find(cnt*k) != mp.end()){
                cnt++;
            }else{
                flag = false;
            }
        }
        return cnt*k;
    }
};