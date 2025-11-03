node* delnode(node* root , int val) {
    if(root == NULL) {
        return root;
    }

    if(root->data > val) {
        root->left = delnode(root->left , val);
    } else if (root->data < val) {
        root->right = delnode(root->right , val);
    } else {
        //case 1 : no child
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        //case 2 : one child
        if(root->left == NULL || root->right == NULL) {
            node * temp = (root->left != NULL) ? root->left : root->right;
            delete root;
            return temp;
        }
        //case 3 : two child
        
    }
}