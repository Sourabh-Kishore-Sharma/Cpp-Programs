#include "iostream"
#include "vector"
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

//The return vector represents root of each node
vector<node*> constructTrees(int start, int end){
    vector<node*> trees;

    if(start>end){
        trees.push_back(NULL);
        return trees;
    }

    for(int i=start; i<=end; i++){
        vector<node*> left_subtrees = constructTrees(start, i-1);
        vector<node*> right_subtrees = constructTrees(i+1,end);

        //For every possible left subtree combine it with 
        //every possible right subtree
        for(int j=0; j<left_subtrees.size(); j++){
            node* left = left_subtrees[j];
            for(int k=0; k<right_subtrees.size(); k++){
                node* right = right_subtrees[k];
                node* n = new node(i);
                n->left = left;
                n->right = right;
                trees.push_back(n);
            }
        }
    }
    return trees;
}

void preorder(node* root){
    if(root==NULL)
        return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    vector<node*> total_trees = constructTrees(1,3);
    for(int i=0; i<total_trees.size(); i++){
        cout<<(i+1)<<" : ";
        preorder(total_trees[i]);
        cout<<endl;
    }
    return 0;
}