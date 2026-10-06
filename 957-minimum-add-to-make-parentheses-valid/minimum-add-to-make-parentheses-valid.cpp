class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> open;
        int cnt =0 ;
        for(int i =0 ; i< s.size(); i++){
            if(s[i] == '(') open.push('(');
            else{
                if(!open.empty()) open.pop();
                else{
                    cnt++;
                }
            }
        }
        cnt += open.size();
        return cnt;
        
    }
};