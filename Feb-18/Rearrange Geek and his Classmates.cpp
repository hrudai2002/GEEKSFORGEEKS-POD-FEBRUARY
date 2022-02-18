https://practice.geeksforgeeks.org/problems/47e5aa3f32aee9e0405f04960f37c8a562d96a2f/1


void prank(long long a[], int n){
        long long p[n];
        long long ans[n];
        
        for(int i = 0; i < n; ++i ){
            p[a[i]] = i;
        }
        
        for(int i = 0; i < n; ++i){
            ans[p[i]] = a[i];
        }
        
        for(int i  = 0; i < n; ++i){
            a[i] = ans[i];
        }
        
    }
