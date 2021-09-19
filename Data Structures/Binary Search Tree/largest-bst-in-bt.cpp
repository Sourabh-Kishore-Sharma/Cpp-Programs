#include "iostream"
#include "climits"
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

struct Info{
    int min;
    int max;
    int size;
    int ans;
    bool isBST;
};

Info largestBSTfromBT(node* root){
    if(root==NULL)
        return {INT_MAX, INT_MIN, 0, 0, true};
    
    //Check for leaf node
    if(root->left == NULL && root->right == NULL)
        return {root->data, root->data, 1, 1, true};
    
    //Get info for left and right sub-tree
    Info left = largestBSTfromBT(root->left);
    Info right = largestBSTfromBT(root->right);

    Info curr;
    curr.size = (1+left.size+right.size);

    //If current node included, it forms a valid BST
    if(left.isBST && right.isBST && left.max<root->data && right.min>root->data){
        curr.min = min(left.min, min(right.min, root->data));
        curr.max = max(right.max, max(left.max, root->data));

        curr.ans = curr.size;
        curr.isBST = true;

        return curr;
    }

    //If current node included, it forms a invalid BST
    curr.ans = max(left.ans, right.ans);
    curr.isBST = false;
    return curr;
}


int main(){
    node* root = new node(5);

    root->left = new node(3);
    root->left->left = new node(2);
    root->left->right = new node(4);

    root->right = new node(6);

    Info a = largestBSTfromBT(root);
    cout<<"Largest Size : "<<a.ans<<endl;
}