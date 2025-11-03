bool search(int val , node* root) { //Recursive method
    if(root->data = val) {
        return true;
    }

    if(root->data > val) {
        search(val, root->right);
    }
    else {
        search(val, root->left);
    }
}

bool search(node* root , int val) {
    while(root != NULL) {
        if(root->data == val) {
            return true;
        }
        else if(x < root->data) {
            root = root->left;
        }
        else {
            root = root->right;
        }
    }
    return false;
}