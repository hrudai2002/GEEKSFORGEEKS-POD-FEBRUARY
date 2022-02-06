https://practice.geeksforgeeks.org/problems/minimum-swaps/1 


int minSwaps(vector<int>&nums) {
	    vector<pair<int, int>> v;
	    for(int i = 0; i < nums.size(); ++i) {
	        v.push_back({nums[i], i});
	    }
	    sort(v.begin(), v.end());
	    
	    int s = 0;
	    for(int i = 0; i < v.size(); ++i) {
	        if(v[i].second == i) {
	            continue;
	        }
	        else {
	            s++;
	            swap(v[i], v[v[i].second]);
	            i--;
	        }
	    }
	    return s;
}
