int min(node* root) { // recursive method
    if(root == NULL) {
        return -1;
    }

    if(root->left == NULL) {
        return root->data;
    }
    else {
        return root->left;
    }
}

int min(node* root) {
    if(root == NULL) {
        return -1;
    }

    while(root->left != NULL) {
        root = root->left;
    }
    return root->data;
}