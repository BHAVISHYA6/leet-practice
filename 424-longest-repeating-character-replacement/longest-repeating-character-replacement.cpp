class Solution {
public:
    int characterReplacement(string s, int k) {
       int l =0, r =0 , maxc =0 , maxf =0 ;
       unordered_map<char , int> mp;
       while( r < s.size()){
            mp[s[r]]++;
            maxf = max( maxf , mp[s[r]]);
            if( r -l+1 - maxf > k){
                mp[s[l]]--;
                if(mp[s[l]] == 0){
                    mp.erase(s[l]);
                }
                l++;
            }if(r -l+1 - maxf <= k){
                maxc = max(  maxc , r-l+1);
            }r++;
       } 
       return maxc;
    }
};