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

node* insertBST(node* root, int val){
    if(root==NULL)
        return new node(val);

    if(val<root->data)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);

    return root;
}

bool search(node* root, int key){
    if(root==NULL)
        return false;
    
    if(key==root->data)
        return true;
    
    bool flag = false;

    if(key<root->data)
        flag = search(root->left, key);
    else
        flag = search(root->right, key);
    
    return flag;
}

void inorder(node* root){
    if(root==NULL)
        return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

node* inorderSuccessor(node* root){
    node* curr = root;
    while(curr && curr->left!=NULL){
        curr = curr->left;
    }
    return curr;
}

//Return node will have the updated node
node* deleteBST(node* root, int key){
    
    if(key<root->data)
        root->left =  deleteBST(root->left, key);
    else if(key>root->data)
        root->right = deleteBST(root->right, key);
    else{
        //when key==root->data

        //Case I - Node is a leaf node
        //Case II - Node has one child
        if(root->left==NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        //Case III - Node has two child
        else{
            //Find inorder successor
            node* temp = inorderSuccessor(root->right);
            //Replace root's value with it's inorder successor
            root->data = temp->data;
            //Delete the root node
            root->right = deleteBST(root->right,temp->data);
        }
    }
    return root;
}

int main(){
    node* root = NULL;

    root = insertBST(root, 3);
    insertBST(root, 2);
    insertBST(root, 1);
    insertBST(root, 7);
    insertBST(root, 5);
    insertBST(root, 8);
    insertBST(root, 4);
    insertBST(root, 6);

    inorder(root);
    cout<<endl;

    /*
    if(search(root, 1))
        cout<<"Key was found."<<endl;
    else
        cout<<"Key not found."<<endl;
    */

    root = deleteBST(root, 5);
    inorder(root);
    cout<<endl;
    return 0;
}