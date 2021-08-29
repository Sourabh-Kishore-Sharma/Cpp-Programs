/*
Program to find whether a given tree is balanced or not.
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

int height(node* root){
    if(root==NULL)
        return 0;
    
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh,rh)+1;
}

bool isBalance(node* root){
    if(root==NULL){
        return true;
    }

    if(isBalance(root->left) == false)
        return false;
    if(isBalance(root->right) == false)
        return false;    
        
    //Calculate left-subtree and right-subtree height
    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh-rh)<=1)
        return true;
    else
        return false;
}

//Optimized function, does not used height function, O(N)
bool isBalancedOptimized(node* root, int* height){
    if(root == NULL){
        *height = 0;
        return true;
    }
    int lh=0,rh=0;

    if(isBalancedOptimized(root->left,&lh)==false)
        return false;
    if(isBalancedOptimized(root->right,&rh)==false)
        return false;
    
    *height = max(lh,rh)+1;

    if(abs(lh-rh)<=1)
        return true;
    else
        return false;    
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    cout<<isBalance(root)<<endl;
    
    int height = 0;
    cout<<isBalancedOptimized(root,&height)<<endl;
}