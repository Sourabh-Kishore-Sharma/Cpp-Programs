/*
Given a binary tree, flatten it into linked list in-place.

After flattening, left of each node should point to NULL & 
right should contain next node in pre-order sequence.

    1               1
   / \               \
  2   3      ->       2 
     / \               \
    4   5               3
                         \
                          4
                           \
                            5


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

void flatten(node* root){
    if(root==NULL || (root->left==NULL && root->right==NULL))
        return;

    if(root->left!=NULL){
        flatten(root->left);

        //Store right sub-tree in temp
        node* temp = root->right;

        //Make left sub-tree as right sub-tree
        root->right = root->left;
        root->left = NULL;

        //Calculate right tail (The tail of the previous left sub-tree)
        node* t = root->right;
        while(t->right!=NULL)
            t = t->right;
        
        //Link left sub-tree with temp
        t->right = temp;
    }
    flatten(root->right);
}

void inorder(node* root){
    if(root==NULL)
        return;
    
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
 
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->right->left = new node(4);
    root->right->right = new node(5);

    flatten(root);
    inorder(root);
    cout<<endl;
}