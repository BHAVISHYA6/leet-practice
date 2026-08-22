class Solution {
public:
    int f(vector<int>& nums){
        int p1 = nums[0], p2 =0 ;
        for(int i =1 ; i< nums.size(); i++){
            int pick = nums[i];
            if(i >1) pick += p2;
            int skip = p1;
            int curr = max(pick , skip);
            p2 = p1;
            p1 = curr;
        }
        return p1;
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        vector<int> temp1, temp2;
        for(int i =0 ; i< nums.size(); i++){
            if(i !=0) temp1.push_back(nums[i]);
            if(i != nums.size()-1) temp2.push_back(nums[i]);
        }
        return max(f(temp1), f(temp2));
    }
};