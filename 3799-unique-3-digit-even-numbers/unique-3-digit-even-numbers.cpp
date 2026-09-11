class Solution {
public:
    void rec(vector<int>& digits , vector<int> &curr , vector<vector<int>> & ans, vector<int> &freq){
        if(curr.size() >= 3){
            if(curr.size() ==3 && curr[2]%2 ==0 && curr[0] != 0){
                ans.push_back(curr);
            }
            return;
        }
        
        for(int i =0 ; i<digits.size(); i++){
            if(freq[i] == 0){
                curr.push_back(digits[i]);
                freq[i] = 1;
                rec(digits , curr , ans , freq);
                curr.pop_back();
                freq[i] = 0;
            }
        }
    }
    int totalNumbers(vector<int>& digits) {
       vector<int> curr;
       vector<vector<int>> ans;
       vector<int> freq(digits.size());
       rec(digits , curr, ans , freq);
       set<vector<int>> st(ans.begin(), ans.end());
       return st.size(); 
    }
};