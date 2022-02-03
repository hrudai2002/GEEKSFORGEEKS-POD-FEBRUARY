https://practice.geeksforgeeks.org/problems/excel-sheet5448/1# 

string ExcelColumn(int N){
        
    string alp = "ZABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ans = "";
    while(N > 0) {
        int r = N % 26;
        int Q = N / 26;

        if(r == 0) {
            ans = alp[r] + ans;
            Q--;
        }
        else {
            ans = alp[r] + ans;
        }
        N = Q;
    }
    return ans;
}
