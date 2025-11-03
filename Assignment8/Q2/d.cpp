node* getinordersuccessor(node* root) {
    while(root != NULL && root->left != NULL) {
        root = root->left;
    }
    return root;
}