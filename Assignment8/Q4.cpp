bool isBST(node* root, int minVal = INT_MIN, int maxVal = INT_MAX) {
    if (root == NULL)
        return true; // empty tree is BST

    if (root->data <= minVal || root->data >= maxVal)
        return false;

    return isBST(root->left, minVal, root->data) &&
           isBST(root->right, root->data, maxVal);
}
