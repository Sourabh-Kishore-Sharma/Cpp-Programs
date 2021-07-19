/*
Program to merge two sorted linked lists.
Using - 
    i) Iterative Method
    ii) Recursive Method
*/
#include "iostream"
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }
};

void insert(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = n;
}

node* merge(node* &head1, node* &head2){
    node* temp1 = head1;
    node* temp2 = head2;
    node* head = NULL;

    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data < temp2->data){
            insert(head, temp1->data);
            temp1 = temp1->next;
        }
        else{
            insert(head, temp2->data);
            temp2 = temp2->next;
        }
    }

    while(temp1!=NULL){
        insert(head, temp1->data);
        temp1 = temp1->next;
    }

    while(temp2!=NULL){
        insert(head, temp2->data);
        temp2 = temp2->next;
    }
    
    return head;
}

node* mergeRecursive(node* &head1, node* &head2){
    node* result;

    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;

    if(head1->data < head2->data){
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    }
    else{
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }

    return result;
}

void display(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head1 = NULL;
    node* head2 = NULL;


    insert(head1, 10);
    insert(head1, 15);
    insert(head1, 20);

    insert(head2, 1);
    insert(head2, 8);
    insert(head2, 9);

    display(head1);
    display(head2);

    node* new_head = merge(head1, head2);
    display(new_head);

}