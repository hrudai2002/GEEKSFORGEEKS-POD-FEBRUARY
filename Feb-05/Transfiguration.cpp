https://practice.geeksforgeeks.org/problems/b6b3297ccfb1ad5f66a9c2b92979170417adf114/1 


int transfigure (string A, string B) {
    	unordered_map<char, int> mp;
    	for(char ch : A) {
    	    mp[ch] += 1;
    	}
    	for(char ch : B) {
    	    if(mp[ch] == 0) return -1;
    	    else mp[ch]--;
    	}
    	int i = A.size() - 1, j = B.size() - 1, ans = 0;
    	while(i >= 0 and j >= 0) {
    	    if(A[i] == B[j]) {
    	        i--, j--;
    	    }
    	    else {
    	        i--;
    	        ans += 1;
    	    }
    	}
    	return ans;
 }
