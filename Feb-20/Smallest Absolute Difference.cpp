https://practice.geeksforgeeks.org/problems/smallest-absolute-difference4320/1 


bool check(int a[], int n, int k, int mid){
    int left = 0;
    int count = 0;
    
    for(int right = 1; right < n; ++right){
        while(a[right] - a[left] > mid)
            left++;
        count += right - left;
            
    }
    return count >= k;
}


int kthDiff(int a[], int n, int k)
{
    sort(a, a + n); 
    int l = 0;
    int r = a[n - 1] - a[0]; 
    while(l < r) {
        int mid = (l + r) >> 1;
        if(check(a, n, k, mid))
          r = mid;
        else
          l = mid + 1;
    }
    return l;
}
