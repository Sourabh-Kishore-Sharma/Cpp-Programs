#include "iostream"
#include "climits"
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int val){
            data = val;
        }
};

node* preorderToBST(int preorder[], int* idx, int key, int min, int max, int n){
    if(*idx >= n)
        return NULL;

    node* root = NULL;

    if(key>min && key<max){
        root = new node(key);
        *idx += 1;

        if(*idx < n){
            root->left = preorderToBST(preorder, idx, preorder[*idx], min, key, n);
        }
        if(*idx < n){
            root->right = preorderToBST(preorder, idx, preorder[*idx], key, max, n);
        }
    }
    return root;
}

void inorder(node* root){
    if(root==NULL)
        return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    int preorder[] = {7,5,4,6,8,9};
    int n = sizeof(preorder)/sizeof(preorder[0]);
    int idx = 0;
    node* root = preorderToBST(preorder, &idx, preorder[0], INT_MIN, INT_MAX, n);

    inorder(root);
    cout<<endl;
}