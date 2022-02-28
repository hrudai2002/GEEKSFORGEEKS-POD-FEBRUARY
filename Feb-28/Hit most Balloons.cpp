https://practice.geeksforgeeks.org/problems/4e75764f8f1638eb4f1c5478ca1986043e15e39a/1

double Slope(int y2, int y1, int x2, int x1) {
    //   if(y2 - y1 == 0  ||  x2 - x1 == 0) return 0;
       return (y2 - y1)/((double)(x2 - x1));
   }
    int mostBalloons(int N, pair<int, int> a[]) {
        
         int ans = 0;
        for(int i = 0; i < N - 1; ++i) {
           unordered_map<double, int> slope;
           int cnt = 0;
            for(int j = i + 1; j < N; ++j) {
                if(a[i] == a[j]) {
                   cnt += 1;
                   continue;
                }
                slope[Slope(a[j].second, a[i].second, a[j].first, a[i].first)] += 1;
            }
            // cout << "\n";
            for(auto i : slope)
            ans = max(ans, i.second + cnt);
        }
       
       
        return ans + 1;
    }
