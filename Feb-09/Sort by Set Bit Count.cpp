https://practice.geeksforgeeks.org/problems/sort-by-set-bit-count1153/1# 


static bool cmp(int a, int b) {
        a = __builtin_popcount(a);
        b = __builtin_popcount(b);
        
        return a > b;
 }
   
void sortBySetBitCount(int arr[], int n) {
        stable_sort(arr, arr + n, cmp);
}
