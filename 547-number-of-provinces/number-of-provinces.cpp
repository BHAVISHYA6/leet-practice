class Solution {
public:
    void dfs(vector<int> &Vis , vector<vector<int>> &adjls , int node){
        Vis[node] = 1;
        for(auto it : adjls[node]){
            if(!Vis[it]){
                dfs(Vis , adjls , it);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int m = isConnected[0].size();
        vector<vector<int>> adjls(n);
        for(int i =0 ; i< n ; i++){
            for(int j =0 ; j< m ; j++){
                if(isConnected[i][j] == 1 && i != j){
                adjls[i].push_back(j);
                adjls[j].push_back(i);
                }
            }
        }
        vector<int> Vis(n,0);
        int cnt = 0 ;
        for(int i =0 ; i<Vis.size() ; i++){
            if(!Vis[i]){
                cnt++;
                dfs(Vis , adjls , i);
            }
        }
        return cnt;
        
    }
};