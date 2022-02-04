https://practice.geeksforgeeks.org/problems/shortest-unique-prefix-for-every-word/1#

class Solution
{
    public:
    struct Solution *child[26];
    int count = 0;
    
    struct Solution* getnode() {
        struct Solution* node = new Solution(); 
        
        
        for(int i = 0; i < 26; ++i) 
            node->child[i] = NULL;
        
        return node;
    }
    
    void insert(struct Solution* root, string s) {
        for(char ch : s) {
            if(root->child[ch - 'a'] == NULL) 
                root->child[ch - 'a'] = getnode(); 
            root = root->child[ch - 'a'];
            root->count += 1;
        }
       
    }
    
    string search(struct Solution* root, string s) {
        string res = "";
        for(char ch : s) {
            res += ch;
            root = root->child[ch - 'a'];
            if(root -> count == 1) 
              return res;
        }
    }
    vector<string> findPrefixes(string arr[], int n)
    {
        vector<string> ans;
     
        struct Solution* root = getnode();
        for(int i = 0; i < n; ++i) {
            insert(root, arr[i]);
        }
        
        for(int i = 0; i < n; ++i) {
            ans.push_back(search(root, arr[i]));
        }
        return ans;
        
    }
    
};
