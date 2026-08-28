class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0, right = 0, ones = 0;
        string ans = s, temp;
        int n = s.length();
        while (right < n) {
            if (s[right] == '1') {
                ones++;
            }
            while (ones > k) {
                if (s[left] == '1') {
                    ones--;
                }
                left++;
            }
            while (ones == k && s[left] == '0') {
                    left++;
            }
            if (ones == k) {
                temp = s.substr(left, right - left + 1);
                // if (temp < ans) {
                //     ans = temp;
                //     minlen = right - left + 1;
                // }
                if(temp.length() < ans.length()){
                    ans = temp;
                }else if( temp.length() == ans.length() && temp < ans){
                    ans = temp;
                }
            }
        right++;
} if (ones < k) {
    return "";
}
return ans;
    }
}
;