node* insert(node* root , int val) {
    if(root == NULL) {
        root = new node(val);
        return root ; 
    }

    if(val< root->data) {
        root->left = insert(root->left , val);
    } else if(val > root->data) {
        root->right = insert(root->right , val);
    } 

    return root;
}