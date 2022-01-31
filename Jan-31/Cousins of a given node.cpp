/* https://practice.geeksforgeeks.org/problems/cousins-of-a-given-node/1 */

class Solution
{
    public:
    vector<int> printCousins(Node* root, Node* node_to_find)
    {  
       if(root == node_to_find) 
           return {-1};
          
       vector<vector<pair<Node*, Node*>>> v; 
       vector<pair<Node*, Node*>> ar;
       queue<Node*> q;
       q.push(root);
       q.push(NULL);
       while(!q.empty()) {
           struct Node* t = q.front();
           q.pop();
           if(t == NULL) {
               v.push_back(ar);
               if(!q.empty()) {
                   q.push(NULL);
               }
               ar.clear();
           }
           else {
               if(t->left) {
                   ar.push_back({t->left, t});
                   q.push(t->left);
               }
               if(t->right) {
                   ar.push_back({t->right, t});
                   q.push(t->right);
               }
           }
       }
       
       
       int i;
       vector<int> ans;
       Node* node_to_find_parent;
       for(i = 0; i < v.size(); ++i) {
           bool flag = false;
           for(auto x : v[i]) {
               if(x.first == node_to_find){
                   node_to_find_parent = x.second;
                   flag = true; 
                
               }
           }
           if(flag) break;
        }
     
       for(auto x : v[i]) {
          if(x.second != node_to_find_parent) ans.push_back(x.first->data);
       }
       if(ans.size() == 0) return {-1};
       return ans;
       
    }
    
};
