class Solution {
public:
    int rec(vector<int>& coins, int amount, int ind, vector<vector<int>> &dp){
        if(amount == 0) return 0;
        if(ind == coins.size()) return 1e9;
        int pick = 1e9 ;
        if(dp[ind][amount] != -1) return dp[ind][amount];
        if(coins[ind] <= amount){
            pick= 1+ rec(coins, amount - coins[ind], ind ,dp);
        }
       int notpick = rec(coins , amount  , ind+1 , dp);
       return dp[ind][amount] =min(pick , notpick);

        
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1 , -1));
        int ans = rec(coins, amount, 0 ,dp);

        if(ans >= 1e9) return -1;

        return ans;
        
    }
};