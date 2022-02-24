https://practice.geeksforgeeks.org/problems/return-two-prime-numbers2509/1

 vector<int> primeDivision(int n){
        vector<bool> prime(10001, true);
        for(int i = 2; i * i <= n; ++i){
            if(prime[i]) {
                for(int p = i * i; p <= n; p += i){
                    prime[p] = false; 
                }
            }
        }
            vector<int> ans;
            for(int i = 2; i <= n; ++i){
                if(prime[i] && prime[n - i]) {
                    ans.push_back(i);
                    ans.push_back(n - i);
                    return ans;
                }
            }
        
    }