node* getinorderpredecessor(node* root) {
    while(root != NULL && root->right != NULL) {
        root = root->right;
    }
    return root;
}