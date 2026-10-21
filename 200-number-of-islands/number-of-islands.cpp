class Solution {
public:
    void bfs(int row , int col , vector<vector<char>> &grid , vector<vector<int>> &vis){
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        q.push({row , col});
        vis[row][col] =1;
        while(!q.empty()){
            int old_row = q.front().first;
            int old_col = q.front().second;
            q.pop();
            int drow[] = {-1, 1, 0, 0};
int dcol[] = {0, 0, -1, 1};

for (int i = 0; i < 4; i++) {
    int new_row = old_row + drow[i];
    int new_col = old_col + dcol[i];

    if (new_row >= 0 && new_row < n &&
        new_col >= 0 && new_col < m &&
        grid[new_row][new_col] == '1' &&
        !vis[new_row][new_col]) {

        vis[new_row][new_col] = 1;
        q.push({new_row, new_col});
    }
}
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n , vector<int> (m,0));
        int cnt =0 ;
        for(int row =0 ; row < n; row++){
            for(int col =0 ; col <m ; col++){
                if(grid[row][col] == '1' && !vis[row][col]){
                    bfs(row , col , grid , vis);
                    cnt++;
                }
            }
        }
        return cnt;

        
    }
};