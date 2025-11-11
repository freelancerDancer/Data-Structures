int mindepth(node* root) {
    if(root == NULL) {
        return 0;
    }
    if(root->Left == NULL) {
        return 1+mindepth(root->right);
    }
    if(root ->right == NULL) {
        return 1+ mindepth(root->left);
    }
    
    return 1 + min(mindepth(root->left) , mindepth(root->right));
}