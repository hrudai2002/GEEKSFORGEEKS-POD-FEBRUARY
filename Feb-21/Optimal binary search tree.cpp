https://practice.geeksforgeeks.org/problems/optimal-binary-search-tree2214/1

int optimalSearchTree(int keys[], int freq[], int n)
    {
        int dp[n][n];
        int psa[n];
        psa[0] = freq[0];
        for(int i = 1; i < n; ++i) psa[i] = freq[i] + psa[i - 1];
        for(int g = 0; g < n; ++g){
            for(int i = 0, j = g; j < n; ++i, ++j) {
                if(g == 0) {
                    dp[i][j] = freq[i];
                }
                else if(g == 1) {
                    int f1 = freq[i];
                    int f2 = freq[j];
                    
                    dp[i][j] = min(f1 + 2*f2, 2*f1 + f2);
                }
                else {
                    int mn = INT_MAX;
                    int fs = psa[j] - (i == 0?0:psa[i - 1]);
                    for(int k = i; k <= j; ++k) {
                        int left = (k == i?0:dp[i][k-1]);
                        int right = (k == j?0:dp[k + 1][j]);
                        
                        mn = min(mn, left + right + fs);
                    }
                    dp[i][j] = mn;
                }
            }
        }
        return dp[0][n - 1];
    }
