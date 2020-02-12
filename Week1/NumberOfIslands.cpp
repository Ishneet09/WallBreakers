class Solution {
public:
    
    void travel(vector<vector<char>>& grid, int i, int j){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == '0')
            return;
        
        grid[i][j] = '0';
        travel(grid, i, j+1);
        travel(grid, i, j-1);
        travel(grid, i-1, j);
        travel(grid, i+1, j);
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int m = grid.size();
        if(m == 0)
            return 0;
        
        int n = grid[0].size();
        
        int ans = 0;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '1'){
                    travel(grid, i, j);
                    ans++;
                }
            }
        }
        return ans;
        
    }
};