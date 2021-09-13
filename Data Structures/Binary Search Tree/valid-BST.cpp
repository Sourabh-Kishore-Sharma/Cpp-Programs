/*
Program to check whether a given BST is valid or not.
*/
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
            left = NULL;
            right = NULL;
        }
};

bool validBST(node* root, int min, int max){
    if(root==NULL)
        return true;

    if(root->data<=min || root->data>=max)
        return false;
    
    return (validBST(root->left, min, root->data) && validBST(root->right, root->data, max));
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);  
    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    cout<<validBST(root, INT_MIN, INT_MAX)<<endl;

    node* new_root = new node(7);
    new_root->left = new node(5);
    new_root->left->left = new node (4);
    new_root->left->right = new node(6);

    new_root->right = new node(8);
    new_root->right->right = new node(9);

    cout<<validBST(new_root, INT_MIN, INT_MAX)<<endl;
}