vector<int> postOrder(Node* node) {
        if(node == NULL) return {};
        stack<Node*> s;
        vector<int> ans;
        
        s.push(node);
        if(node->right){
            s.push(node->right);
            node->right = NULL;
        } 
        if(node->left){
           s.push(node->left);
           node->left = NULL;
        } 
        
        while(!s.empty()) {
            Node* top = s.top();
            
            if(top->left == NULL and top->right == NULL) {
                ans.push_back(top->data);
                s.pop();
            }
            else {
                if(top->right) {
                    s.push(top->right);
                    top->right = NULL;
                }
                if(top->left) {
                    s.push(top->left);
                    top->left = NULL;
                }
            }
            
        }
        return ans;
}
