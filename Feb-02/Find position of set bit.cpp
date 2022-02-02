https://practice.geeksforgeeks.org/problems/find-position-of-set-bit3706/1#

int findPosition(int n) {
        if(n == 0) return -1;
        if(n == 1) return  1;
        if((n&(n - 1)) == 0) {
            int pos = 1;
            while(n) {
                if(n & 1) return pos;
                pos += 1;
                n >>= 1;
            }
        }
        else return -1;
}
