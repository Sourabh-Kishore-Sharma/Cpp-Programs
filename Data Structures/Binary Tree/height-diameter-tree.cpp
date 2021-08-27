/*
Program to calculate height and diameter for a given tree.

Height - It is the depth of the tree's deepest node.
Diameter/Width - Number of nodes on the loongest path between any two leaf nodes.
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

int calculateHeight(node* root){
    if(root==NULL)
        return 0;
    
    int left_height = calculateHeight(root->left);
    int right_height = calculateHeight(root->right);
    return max(left_height,right_height)+1;
}

int calculateDiameter(node* root){
    if(root==NULL)
        return 1;
    
    //If diameter passes through the root node
    int left_height = calculateHeight(root->left);
    int right_height = calculateHeight(root->right);
    int d1 = left_height+right_height+1;

    //If diameter doesn't passes through the root node
    int left_diameter = calculateDiameter(root->left);
    int right_diameter = calculateDiameter(root->right);
    int d2 = max(left_diameter, right_diameter);

    return max(d1,d2);
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    cout<<calculateHeight(root)<<endl;
    cout<<calculateDiameter(root)<<endl;
}