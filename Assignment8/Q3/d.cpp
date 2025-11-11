int maxdepth(node* root) {
    if(root == NULL) {
        return 0;
    }

    int leftdepth = maxdepth(root->left);
    int rightdepth = maxdepth(root->right);

    return 1 + maxdepth(leftdepth,rightdepth);
}