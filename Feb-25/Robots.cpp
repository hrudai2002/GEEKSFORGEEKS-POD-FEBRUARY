https://practice.geeksforgeeks.org/problems/d35adfbe367861ec1e67bea6e0efebe0a0ee3550/1#

string moveRobots(string s1, string s2){
        int i = 0, j = 0, n = s1.size();
        while(i < n && j < n) {
            if(s1[i] == '#') i++;
            else if(s2[j] == '#') j++;
            else if(s1[i] != s2[j]) return "No";
            else if(s1[i] == 'A' && i < j) return "No";
            else if(s1[i] == 'B' && i > j) return "No";
            else i++, j++;
        }
        return "Yes";
        
}