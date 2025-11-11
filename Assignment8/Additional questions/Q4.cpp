void levelorder(node* root) {
    if(root == NULL) {
        return;
    }

    queue<node*> q;
    q.push(root);

    while(!q.empty()) {
        node* curr = q.front();
        q.pop();

        cout << curr->data << " " << endl;

        if(curr->left != NULL) {
            q.push(curr->left);
        }

        if(curr->right != NULL) {
            q.push(curr->right);
        }
    }
}