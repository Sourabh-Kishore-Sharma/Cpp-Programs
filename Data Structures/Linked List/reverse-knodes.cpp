/*
Given a linked list & an integer k.
Reverse the nodes of the list, k at a time and
return its modified list.
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

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = n;
    return;
}

void display(node* head){
    if(head==NULL){
        cout<<"Empty !!!"<<endl;
        return;
    }

    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverseKnodes(node* head, int k){
    node* prev_ptr = NULL;
    node* cur_ptr = head;
    node* next_ptr;
    
    int count = 0;
    while(cur_ptr != NULL && count<k){
        next_ptr = cur_ptr->next;
        cur_ptr->next = prev_ptr;
        prev_ptr = cur_ptr;
        cur_ptr = next_ptr;
        count++;
    }

    if(next_ptr != NULL){
        head->next = reverseKnodes(next_ptr, k);
    }
    return prev_ptr;
}

int main(){
    node* head = NULL;
    
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    display(head);

    node* new_head = reverseKnodes(head, 2);

    display(new_head);
}