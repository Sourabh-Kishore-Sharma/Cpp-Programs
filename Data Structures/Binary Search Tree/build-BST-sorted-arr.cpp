/*
Build BST from a given sorted array.
*/
#include "iostream"
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

node* sortedArrToBST(int arr[], int l, int r){
    if(l>r)
        return NULL;

    int mid = (l+r)/2;
    node* root = new node(arr[mid]);
    root->left = sortedArrToBST(arr, l, mid-1);
    root->right = sortedArrToBST(arr, mid+1, r);

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
    int arr[] = {1,2,3,4,5,6,7,8};
    int l = 0;
    int r = 7;

    node* root = sortedArrToBST(arr, l, r);

    inorder(root);
    cout<<endl;
}