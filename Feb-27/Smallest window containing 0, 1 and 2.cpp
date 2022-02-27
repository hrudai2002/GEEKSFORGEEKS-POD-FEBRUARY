https://practice.geeksforgeeks.org/problems/d6e88f06b273a60ae83992314ac514f71841a27d/1#


bool check(string s, int m) {
        int a[3] = {0};
        for(int i = 0; i < m; ++i) {
            a[s[i] - '0']++;
        }
        
        if(a[0] >= 1 && a[1] >= 1 && a[2] >= 1) return true;
        int ptr = 0;
        for(int i = m; i < s.size(); ++i) {
            
            a[s[i] - '0']++;
            a[s[ptr] - '0']--;
            
            ptr++;
           if(a[0] >= 1 && a[1] >= 1 && a[2] >= 1) return true;
        }
       if(a[0] >= 1 && a[1] >= 1 && a[2] >= 1) return true;
         return false;
    }
    int smallestSubstring(string s) {
        int l = 3;
        int r = s.size();
        int res = INT_MAX;
        while(l < r) {
            int m = (l + r) >> 1;
            if(check(s, m)) {
                res = min(res, m);
                r = m;
            }
            else {
                l = m + 1;
            }
        }
        
        if(check(s, l)) {
          res = min(res, l);
        }
        if(res == INT_MAX) return -1;
        return res;
    }