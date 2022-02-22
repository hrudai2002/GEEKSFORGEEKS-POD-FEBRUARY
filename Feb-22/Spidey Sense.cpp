https://practice.geeksforgeeks.org/problems/spidey-sense5556/1 

 vector<vector<int> > findDistance(vector<vector<char> >& matrix, int M, int N) 
    { 
        vector<vector<int>> ans(M, vector<int>(N, 0));
        queue<pair<int, int>> q, res;
        for(int i = 0; i < M; ++i) {
            for(int j = 0; j < N; ++j) {
                if(matrix[i][j] == 'O') q.push({i, j}), ans[i][j] = INT_MAX;
                if(matrix[i][j] == 'W') ans[i][j] = -1;
            }
        }
        
        while(!q.empty()) {
            pair<int, int> node = q.front();
            int x = node.first;
            int y = node.second;
            q.pop();
            
            if(x + 1 < M && matrix[x + 1][y] == 'B') ans[x][y] = 1;
            if(0 <= x - 1  && matrix[x - 1][y] == 'B') ans[x][y] = 1;
            if(0 <= y - 1 && matrix[x][y - 1] == 'B') ans[x][y] = 1;
            if(y + 1 < N && matrix[x][y + 1] == 'B') ans[x][y] = 1;
            
            if(ans[x][y] == 1)
            res.push(node);
        }
        
        vector<vector<bool>> vis(M, vector<bool>(N, false));
        
        while(!res.empty()) {
            int x = res.front().first;
            int y = res.front().second;
            vis[x][y] = true;
            res.pop();
            
            if(x + 1 < M && matrix[x + 1][y] == 'O'){
                ans[x + 1][y] = min(ans[x + 1][y], ans[x][y] + 1);
                if(!vis[x + 1][y])
                res.push({x + 1, y});
            }
            if(0 <= x - 1 && matrix[x - 1][y] == 'O') {
                ans[x - 1][y] = min(ans[x - 1][y], ans[x][y] + 1);
                if(!vis[x - 1][y])
                res.push({x - 1, y});
            }
            if(0 <= y - 1 && matrix[x][y - 1] == 'O') {
                ans[x][y - 1] = min(ans[x][y - 1], ans[x][y] + 1);
                if(!vis[x][y - 1])
                res.push({x, y - 1});
            }
            if(y + 1 < N && matrix[x][y + 1] == 'O') {
                ans[x][y + 1] = min(ans[x][y + 1], ans[x][y] + 1);
                if(!vis[x][y + 1])
                res.push({x, y + 1});
            }
            
        }
        
        for(int i = 0; i < M; ++i) {
            for(int j = 0; j < N; ++j) {
               if(ans[i][j] == INT_MAX) ans[i][j] = -1;
            }
        }
        
        
        return ans;
        
    } 