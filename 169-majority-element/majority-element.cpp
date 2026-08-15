class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el ;
        int cnt =0 ;
        int n = nums.size();
        for(int i =0 ; i< n ; i++){
            if(cnt == 0){
                cnt =1 ;
                el = nums[i];
            }else if(nums[i] == el){
                cnt++ ;
            }
            else{
                cnt --;
            }
        }
        int cc = 0;
        for(int i =0 ; i<n; i++){
            if(nums[i] == el) cc++;
        }
        if(cc > n/2) return el;
        else return -1;
    }
};