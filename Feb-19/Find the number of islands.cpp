https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1#

vector<int> d1{-1,1,0,0,-1,-1,1,1};
    vector<int> d2{0,0,-1,1,-1,1,-1,1};
    vector<vector<bool>> vis;
    void islands(vector<vector<char>> &grid, int i, int j) {
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()) return;
        if(grid[i][j] == '0' || vis[i][j]) return; 
        vis[i][j] = true;
        
        for(int k = 0; k < d1.size(); ++k) {
            islands(grid, i + d1[k], j + d2[k]);
        }
       
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int island = 0;
        for(int i = 0; i < grid.size(); ++i) {
            vector<bool> v;
            for(int j = 0; j < grid[0].size(); ++j) {
                v.push_back(false);
            }
            vis.push_back(v);
        }
        for(int i = 0; i < grid.size(); ++i) {
            for(int j = 0; j < grid[0].size(); ++j) {
                if(grid[i][j] == '1' && !vis[i][j]) {
                    islands(grid, i, j);
                    island += 1;
                }
            }
        }
        return island;
    }
