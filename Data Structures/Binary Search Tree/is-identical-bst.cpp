#include "iostream"
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isIdentical(node* root_one, node* root_two){
    bool check_1;
    bool check_2;
    bool check_3;

    if(root_one==NULL && root_two==NULL){
        return true;
    }
    else if(root_one==NULL || root_two==NULL){
        return false;
    }
    else{
        check_1 = root_one->data == root_two->data;
        check_2 = isIdentical(root_one->left, root_two->left);
        check_3 = isIdentical(root_one->right, root_two->right);
    }
    return (check_1&&check_2&&check_3);
    
}

int main(){
    node* root_one = new node(7);

    root_one->left = new node(5);
    root_one->left->left = new node(4);
    root_one->left->right = new node(6);

    root_one->right = new node(8);
    root_one->right->right = new node(9);

    
    node* root_two = new node(7);

    root_two->left = new node(5);
    root_two->left->left = new node(4);
    root_two->left->right = new node(6);

    root_two->right = new node(8);
    root_two->right->right = new node(90);

    if(isIdentical(root_one, root_two))
        cout<<"BSTs are identical."<<endl;
    else
        cout<<"BSTs are not identical."<<endl;
    
    return 0;
}