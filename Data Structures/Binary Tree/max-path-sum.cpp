#include "iostream"
#include "climits"
using namespace std;

int max_sum = 0;

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

int maxPathSumUtil(node* root, int &ans){
    if(root==NULL)
        return 0;
    
    int left = maxPathSumUtil(root->left, ans);
    int right = maxPathSumUtil(root->right, ans);

    int node_max = max(
                        max(root->data, left+right+root->data),
                        max(left+root->data, right+root->data)
                        );
    ans = max(ans, node_max);
    int singlePathSum = max(root->data, 
                        max(root->data+left, root->data+right));
    
    return singlePathSum;
}

int maxPathSum(node* root){
    int ans = INT_MIN;
    maxPathSumUtil(root, ans);
    return ans;
}

int main(){
    /*
        1
       / \
    -12   3
    /    / \
   4    5  -6
    */
    node* root = new node(1);
    root->left = new node(-12);
    root->left->left = new node(4);

    root->right = new node(3);
    root->right->left = new node(5);
    root->right->right = new node(-6);

    cout<<maxPathSum(root)<<endl;
}