https://practice.geeksforgeeks.org/problems/xor-game2143/1

 int xorCal(int n){

        if(n == 1) return 2;

        if((n & (n + 1)) == 0) {

            return n >> 1;

        }

        return -1;

    }
