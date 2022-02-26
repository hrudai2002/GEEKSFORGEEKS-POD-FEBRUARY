https://practice.geeksforgeeks.org/problems/a4f19ea532cee502aabec77c07e0d0a45b76ecf9/1# 

int build_bridges(string str1, string str2)
    {
        int n = str1.size();
        int m = str2.size();
        
        vector<vector<int>> lcs(n + 1, vector<int> (m + 1, 0));
        for(int i = 0; i <= n; ++i) {
            for(int j = 0; j <= m; ++j) {
                if(i == 0 || j == 0) 
                   lcs[i][j] = 0;
                
                else if(str1[i - 1] == str2[j - 1])
                  lcs[i][j] = 1 + lcs[i - 1][j - 1];
                
                else 
                  lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
                 
            }  
        }
        return lcs[n][m];
    }