https://practice.geeksforgeeks.org/problems/anagram-of-string/1

int remAnagram(string str1, string str2)
{
// Your code goes here
   vector<int> ar(26, 0);
   for(char ch : str1){
       ar[ch - 'a']++;
   }
   
   for(char ch : str2) {
       ar[ch - 'a']--;
   }
   int mn = 0;
   for(int i = 0; i < 26; ++i){
       mn += abs(ar[i]);
   }
   return mn;
}
