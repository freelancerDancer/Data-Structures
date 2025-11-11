int leftsum(node* root) {
    if(root == NULL) {
        return ;
    }

    int sum = 0;
    if(root-left != NULL) {
        sum += root->left->data;
    }

    sum += leftsum(root-left);
    sum += leftsum(root->right);

    return sum;
}
