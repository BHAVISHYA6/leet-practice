class Solution {
public:
    bool checkString(string s) {
        bool already_b = false;
        for(int i =0 ; i<s.size(); i++){
            if(s[i] == 'b'){
                already_b = true;
            }
            if(already_b == true && s[i] == 'a'){
                return false;
            }
        }
        return true;
    }
};