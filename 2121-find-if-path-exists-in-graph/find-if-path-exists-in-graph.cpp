class Solution {
public:
    bool dfs(int s , int d , vector<vector<int>> &adj , vector<int> &vis){
        if(s == d) return true;
        vis[s] =1 ;
        for(auto it : adj[s]){
            if(!vis[it]){
                if(dfs(it , d , adj, vis)){
                    return true;
                }

            }
        } 
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(int i =0 ; i< edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> vis(n,0);
        return dfs(source , destination , adj , vis);
    }
};