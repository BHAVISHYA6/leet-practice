class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans = "";
        int n= num.size();
        if(k >= n) return "0";
        for(int i =0 ; i< n ; i++){
            while(!ans.empty() && k >0 && ans.back()-'0' > num[i]-'0'){
                ans.pop_back();
                k--;
            }
            ans.push_back(num[i]);
        }
        while(k > 0){
            ans.pop_back();
            k--;
        }
        int i =0 ;
        while(i < ans.size() && ans[i] == '0'){
            i++;
        }
        ans = ans.substr(i);
        if(ans.size() > 0) return ans;
        return "0";
    }
};