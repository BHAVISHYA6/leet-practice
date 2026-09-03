class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i =0 ; i< n; i++){
            int cnt = i+1;
            bool push = false;
            while((cnt % n) != i ){
                if(nums[cnt%n] > nums[i]){
                    ans.push_back(nums[cnt%n]);
                    push = true;
                    break;
                }
                cnt++;

            }
            if(!push) ans.push_back(-1);
        }
    return ans;
    }
};