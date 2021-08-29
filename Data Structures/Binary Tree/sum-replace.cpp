/*
Replace the value of each node with the sum of all subtree nodes & itself.

    1               15
   / \             /  \
  2   3    ->     11   3
 / \             /  \
4   5           4    5

Note : The new root's value is the total sum of all nodes.
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

void sumReplace(node* root){
    if(root==NULL)
        return;

    sumReplace(root->left);
    sumReplace(root->right);

    if(root->left != NULL)
        root->data += root->left->data;

    if(root->right != NULL)
        root->data += root->right->data;
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    sumReplace(root);
    cout<<root->data<<endl;
}