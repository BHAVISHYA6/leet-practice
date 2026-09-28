class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int cnt =0 , maxcnt =0;
        for(int i = 0; i<s.size() ; i++){
            if(s[i] == '('){
                st.push('(');
            }else if(s[i] == ')'){
                cnt = st.size();
                st.pop();
                maxcnt = max(cnt , maxcnt);
            }else{
                continue;
            }
        }
        return maxcnt;
        
    }
};