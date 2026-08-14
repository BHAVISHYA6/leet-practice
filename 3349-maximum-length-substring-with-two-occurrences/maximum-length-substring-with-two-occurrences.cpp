class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxi = INT_MIN;
        for(int i =0 ; i<s.size() ; i++){
            unordered_map<char , int> mp;
            for(int j = i ; j<s.size() ; j++){
                mp[s[j] - 'a']++;
                if(mp[s[j] - 'a'] > 2) break;  
                maxi = max(maxi , j-i+1);              
            }
            
        }
        return maxi;
    }
};