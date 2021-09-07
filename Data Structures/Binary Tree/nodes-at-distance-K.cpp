/*
Given a binary tree, a target node in the binary tree,
and an integer value K, print all the nodes that are at distance K
from the given target node.
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

//Case I
void printSubtreeNodes(node* root, int k){
    if(root==NULL || k<0)
        return;
    
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
        
    printSubtreeNodes(root->left, k-1);
    printSubtreeNodes(root->right, k-1);
}

//Case 2
int printNodeAtK(node* root, node* target, int k){
    if(root==NULL)
        return -1;
    
    if(root==target){
        printSubtreeNodes(root, k);
        return 0;
    }

    //Check for left sub-tree
    int dl = printNodeAtK(root->left, target, k);
    if(dl != -1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }
        else{
            // 1 distance travelled from left to ancestor
            //+1 distance travelled from ancestor to right
            //Hence, -2
            printSubtreeNodes(root->right, k-dl-2);
        }
        return dl+1;
    }

    //Check for right sub-tree
    int dr = printNodeAtK(root->right, target, k);
    if(dr != -1){
        if(dr+1==k){
            cout<<root->data<<" ";
        }
        else{
            // 1 distance travelled from left to ancestor
            //+1 distance travelled from ancestor to right
            //Hence, -2
            printSubtreeNodes(root->left, k-dr-2);
        }
        return dr+1;
    }
    return -1;
}

int main(){
    /*
        1
       / \
      5   2
         / \
        3   4
    */
    node* root = new node(1);

    root->right = new node(2);
    root->right->left = new node(3);
    root->right->right = new node(4);
    root->left = new node(5);

    printNodeAtK(root,root->left,3);
    cout<<endl;
}