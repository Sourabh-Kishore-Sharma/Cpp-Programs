/*
Shortest distance between two nodes of a binary tree.
    It is the distance between two nodes is the minimum 
    number of edges to be traversed to reach node from another.
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

node* LCA(node* root, int n1, int n2){
    if(root == NULL)
        return NULL;
    
    if(root->data==n1 || root->data==n2)
        return root;
    
    node* left_lca = LCA(root->left, n1, n2);
    node* right_lca = LCA(root->right, n1, n2);

    if(left_lca!=NULL && right_lca!=NULL)
        return root;
    
    if(left_lca==NULL && right_lca==NULL)
        return NULL;
    
    if(left_lca!=NULL)
        return left_lca;
    
    return right_lca;
}

//Distance = No. of levels
int findDistance(node* root, int n, int distance){
    if(root==NULL)
        return -1;
    
    if(root->data==n)
        return distance;
    
    int left = findDistance(root->left, n, distance+1);
    if(left!=-1)
        return left;
    
    return findDistance(root->right, n, distance+1);
}

int disBtwNodes(node* root, int n1, int n2){
    node* lca = LCA(root, n1, n2);

    int d1 = findDistance(lca, n1, 0);
    int d2 = findDistance(lca, n2, 0);

    return (d1+d2);
}

int main(){
    /*
    
        1
      /   \
     2     3
    / \   / \
   4   5 6   7

    */

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    //cout<<LCA(root, 4, 7)->data<<endl;
    //cout<<LCA(root, 6, 7)->data<<endl;

    cout<<disBtwNodes(root, 4, 7)<<endl;
    cout<<disBtwNodes(root, 6, 7)<<endl;
}