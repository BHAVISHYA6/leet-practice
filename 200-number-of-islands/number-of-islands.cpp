class Solution {
public:
    void dfs(vector<vector<char>> &grid ,int i , int j){
        if(i <0 || i >= grid.size() || j <0 || j>= grid[0].size() || grid[i][j] == '0'){
            return;
        }
        grid[i][j] = '0';
        dfs(grid ,i+1 ,j);
        dfs(grid ,i-1 ,j);
        dfs(grid ,i ,j+1);
        dfs(grid ,i ,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt =0 ;
        for(int row =0 ; row <n ; row++){
            for(int col =0 ; col <m ; col++){
                if(grid[row][col]=='1'){
                    dfs(grid ,row , col);
                    cnt++ ;
                }
            }
        }
        return cnt;
    }
};