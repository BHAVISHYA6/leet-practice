class Solution {
public:
    void rec(vector<vector<string>> &ans , vector<string> &curr ,string s, int index){
        if(index == s.size()){
            ans.push_back(curr);
            return;
        }
        for(int i = index ; i< s.size(); i++){
            if(isPal(s,index ,i)){
                curr.push_back(s.substr(index, i - index+1));
                rec(ans, curr , s , i+1);
                curr.pop_back();
            }
        }
    }
    bool isPal(string s , int start , int end){
        while(start <= end){
            if(s[start++] != s[end--]){
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> curr;
        rec(ans, curr ,s , 0);
        return ans;
        
    }
};