https://practice.geeksforgeeks.org/problems/insertion-sort-for-singly-linked-list/1# 

 Node* insertionSort(struct Node* root){
        if(root == NULL || root->next == NULL) return root;
        struct Node* node = root;
        while(node) {
            struct Node* temp = root;
            while(temp->next != NULL) {
                if(temp->data > temp->next->data) {
                    swap(temp->data, temp->next->data);
                }
                temp = temp->next;
            }
            node = node->next;
        }
        return root;
}
    