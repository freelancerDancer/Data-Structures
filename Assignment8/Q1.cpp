#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node(int data) {
        this->data = data;
        left = right = NULL;

    }
};

node* insert(node* root , int val) {
    if(root == NULL) {
        root = new node(val);
        return root ; 
    }

    if(val< root->data) {
        root->left = insert(root->left , val);
    } else if(val > root->data) {
        root->right = insert(root->right , val);
    } 

    return root;
}

node* buildBST(int arr[] , int n) {
    node* root = NULL;

    for(int i=0 ; i<n ; i++) {
        root = insert(root , arr[i]);
    }

    return root;
}

void inorder(node* root) {
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data<< " ";
    inorder(root->right);

}

void preorder(node* root) {
    if(root == NULL) {
        return;
    }
    cout << root->data << " " << endl;
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root) {
    if(root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " " << endl;
}