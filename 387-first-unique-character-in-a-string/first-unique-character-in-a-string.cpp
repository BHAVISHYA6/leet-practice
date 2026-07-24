class Solution {
public:
    int firstUniqChar(string s) {
       for(int i =0 ; i< s.size() ; i++){
        bool rep = false ;
        for(int j = 0 ; j<s.size() ;j++){
            if(s[i] == s[j] && i != j){
                rep = true;
                break ;
            }
        }
        if(rep ==false){
            return i;
        }
       }
       return -1;
    }
};