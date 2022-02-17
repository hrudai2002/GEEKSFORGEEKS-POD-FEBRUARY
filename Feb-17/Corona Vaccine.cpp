https://practice.geeksforgeeks.org/problems/d1afdbd3d49e4e7e6f9d738606cd592f63e6b0f0/1#


int vaccine = 0;
    int cv(Node* root) {
        if(root == NULL)
          return 1; 
        
        int left = cv(root->left);
        int right = cv(root->right);
        
        if(left == -1 || right == -1){
            vaccine++;
            return 0;
        }
        
        if(left == 0 || right == 0) {
            return 1;
        }
        
        return -1;
    }
    int supplyVaccine(Node* root){
        if(cv(root) == -1) vaccine++;
        
        return vaccine;
    }
