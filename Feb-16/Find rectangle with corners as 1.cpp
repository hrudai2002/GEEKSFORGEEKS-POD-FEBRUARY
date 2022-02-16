https://practice.geeksforgeeks.org/problems/253524a82f7b4561dc33ff637cd3b92c33d4f216/1

ool ValidCorner(const vector<vector<int> >& mat)
    {
        int r = mat.size(), c = mat[0].size();
        for(int i = 0; i < r; ++i){
            
            for(int x = 0; x < c; ++x){
                if(mat[i][x] == 1) {
                   for(int y = x + 1; y < c; ++y){
                      if(mat[i][y] == 1){
                        for(int k = i + 1; k < r; ++k) {
                                 if(mat[k][x] && mat[k][y]){
                                     //cout<< i << " " << k << " " << x << " "<< y << "\n"; 
                                     return true;
                                 }
                            }
                       }
                  }
                
                }
            }
        }
        return false;
    }
