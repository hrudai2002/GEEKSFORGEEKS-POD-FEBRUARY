https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1# 


int *findTwoElement(int *arr, int n) {
        static int res[2];
        for(int i = 0; i < n; ++i) {
            if(arr[abs(arr[i]) - 1] > 0)
              arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
            else
               res[0] = abs(arr[i]);
        }
        
        for(int i = 0; i < n; ++i){
            if(arr[i] > 0)
              res[1] = i + 1;
        }
        
        return res;
}
