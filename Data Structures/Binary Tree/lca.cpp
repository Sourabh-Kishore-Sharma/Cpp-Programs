#include "iostream"
#include "vector"
using namespace std;

/*
Program to find the LCA(Lowest Common Ancestor) of two given nodes n1 and n2.

LCA - LCA of two nodes n1 and n2 in a tree is the lowest node
        that has both n1 and n2 as decendants.
*/

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

bool getPath(node* root, int key, vector<int> &path){
    if(root==NULL)
        return false;
    
    path.push_back(root->data);
    if(root->data == key)
        return true;
    
    //If found on either left or right subtree
    if( getPath(root->left, key, path) || getPath(root->right, key, path) )
        return true;
    
    path.pop_back();
    return false;
}

int LCA(node* root, int n1, int n2){
    vector<int> path_n1, path_n2;

    if( !getPath(root, n1, path_n1) || !getPath(root,n2,path_n2)){
        return -1;
    }

    int pc;
    for( pc=0; pc<path_n1.size() && path_n2.size(); pc++){
        if( path_n1[pc] != path_n2[pc])
            break;
    }

    return path_n1[pc-1];
}

int main(){
    /*
    
        1
      /   \
     2     3
    /     / \
   4     5   6
        /
       7

    */
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);

    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);

    cout<<LCA(root, 7, 6)<<endl;
    cout<<LCA(root, 4, 6)<<endl;
}