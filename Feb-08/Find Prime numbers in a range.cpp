https://practice.geeksforgeeks.org/problems/find-prime-numbers-in-a-range4718/1#

vector<int> primeRange(int M, int N) {
        vector<bool> prime(N + 1, true);
        prime[0] = prime[1] = false;
        for(int i = 2; i * i <= N; ++i) {
            if(prime[i]) {
                for(int p = i * i; p <= N; p += i)
                 prime[p] = false;
            }
        }
        vector<int> ans;
        for(int i = M; i <= N; ++i)
           if(prime[i]) ans.push_back(i);
        return ans;
}
