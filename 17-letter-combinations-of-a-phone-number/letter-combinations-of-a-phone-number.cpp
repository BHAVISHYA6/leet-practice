class Solution {
public:
    void rec(vector<string> &ans , string curr ,string digits, int index, unordered_map<char , string> mpp ){
        if(index == digits.size()){
            ans.push_back(curr);
            return;
        }
        char ch = digits[index];
        string letters = mpp[ch];
        for(int i =0 ; i< letters.size(); i++){
            char let = letters[i];
            curr += let;
            rec(ans, curr , digits , index+1, mpp);
            curr.pop_back();

        }

   }

    vector<string> letterCombinations(string digits) {
        unordered_map<char , string> mpp;
        mpp['2'] = "abc";
        mpp['3'] = "def";
        mpp['4'] = "ghi";
        mpp['5'] = "jkl";
        mpp['6'] = "mno";
        mpp['7'] = "pqrs";
        mpp['8'] = "tuv";
        mpp['9'] = "wxyz";

        vector<string> ans;
        string curr;
        rec(ans , curr , digits , 0 , mpp);
        return ans;
    }
};