#include "iostream"
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

void calcPointers(node* root, node** first, node** mid, node** last, node** prev){
    if(root==NULL)
        return;
    
    calcPointers(root->left, first, mid, last, prev);

    //Check if any violation
    if(*prev!=NULL && root->data < ((*prev)->data)){
        //Check for First violation or second violation
        if(!*first){
            *first = *prev;
            *mid = root;
        }
        else{
            *last = root;
        }
    }
    *prev = root;
    calcPointers(root->right, first, mid, last, prev);
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void recoverBST(node* root){
    node* first, *mid, *last, *prev;

    first = NULL;
    mid = NULL;
    last = NULL;
    prev = NULL;

    calcPointers(root, &first, &mid, &last, &prev);

    //Case I - Swapped elements are not adjacent
    if(first!=NULL && last!=NULL ){
        swap(&(first->data),&(last->data));
    }
    //Case II - Swapped elements are adjacent
    else if(first!=NULL && mid!=NULL){
        swap(&(first->data),&(mid->data));
    }
    
}

void inorder(node* root){
    if(root == NULL)
        return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node* root = new node(6);

    root->left = new node(9);
    root->left->left = new node(1);
    root->left->right = new node(4);

    root->right = new node(3);
    root->right->right = new node(13);

    inorder(root);
    cout<<endl;

    recoverBST(root);

    inorder(root);
    cout<<endl;
}