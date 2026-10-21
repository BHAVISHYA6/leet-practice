class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cntfresh =0 ;
        queue<pair<pair<int , int>,int>> q;
        for(int row =0 ; row< n ; row++){
            for(int col =0 ; col <m ; col++){
                if(grid[row][col] == 2){
                    q.push({{row , col},0});
                }
                if(grid[row][col] == 1){
                    cntfresh++;
                }
            }
        }
        int tm =0 ;
        int drow[] = {-1 ,0 ,1 ,0};
        int dcol[] = {0 ,-1 ,0 ,1};
        int cnt =0 ;
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            tm = max(tm , t);
            q.pop();
            for(int i =0 ; i <4 ; i++){
                int nrow = row + drow[i];
                int ncol = col +dcol[i];
                if(nrow >= 0 && nrow <n && ncol >= 0 && ncol <m && grid[nrow][ncol] == 1){
                    grid[nrow][ncol] = 2;
                    q.push({{nrow ,ncol} ,t+1});
                    cnt++;
                }
            }
        }
        if(cntfresh != cnt) return -1;
        return tm;
        
    }
};