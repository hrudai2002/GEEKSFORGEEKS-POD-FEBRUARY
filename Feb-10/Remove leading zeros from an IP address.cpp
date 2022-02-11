https://practice.geeksforgeeks.org/problems/remove-leading-zeros-from-an-ip-address3530/1

 string newIPAdd (string s)

    {

        s += ".";

        vector<string> ip;

        string x = "";

        for(char c : s) {

            if(c == '.') {

                ip.push_back(x);

                x = "";

            }

            else

              x += c;

        }

        string ans = "";

        for(string s : ip){

             int i = 0;

             while(s[i] == '0' && i < s.size() - 1){

                 i++;

             }

             ans += s.substr(i);

             ans += ".";

        }

        return ans.substr(0, ans.size() - 1);

    }
