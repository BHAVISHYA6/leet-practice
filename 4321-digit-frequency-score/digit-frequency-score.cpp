class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> mp ;
        int num = n;
        while(num > 0){
            int a = num % 10;
            mp[a]++;
            num = num/10;
        }
        int ans = 0;
        for(auto it:mp){
            ans += (it.first*it.second);
        }
        return ans ;
        
    }
};