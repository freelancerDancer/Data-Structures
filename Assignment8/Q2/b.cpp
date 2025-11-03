int max(node* root) {  //recursive method
    if (root == NULL) {
        return -1; // or any sentinel value / handle as an error
    }

    if (root->right == NULL) {
        return root->data; // rightmost node = maximum
    }

    return max(root->right);
}

int max(node* root) {
    if (root == NULL)
        return -1;

    while (root->right != NULL)
        root = root->right;

    return root->data;
}
