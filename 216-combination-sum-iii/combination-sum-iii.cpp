class Solution {
public:
     void rec(int start , int sum, int k , vector<int> &curr, vector<vector<int>> &ans){
        if(sum == 0 && curr.size() == k){
            ans.push_back(curr);
        }
        if(sum <= 0 || curr.size()> k) return;
        for(int i = start ; i<= 9 ; i++){
            if(i <= sum){
            curr.push_back(i);
            rec(i+1 , sum -i , k, curr , ans );
            curr.pop_back();
            }else{
                break ;
            }
        }
     }
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<vector<int>> ans ;
       vector<int> curr;
       rec(1 ,n , k , curr , ans);
       return ans; 
    }
};