/*
Program to reverse a linked list.
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
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    if(head == NULL){
        cout<<"Linked list is empty."<<endl;
        return;
    }

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverseIterative(node* head){
    if(head == NULL){
        cout<<"Linked list is empty."<<endl;
        return NULL;
    }

    node* prev_ptr = NULL;
    node* cur_ptr = head;
    node* next_ptr;
    
    while(cur_ptr!= NULL){
        next_ptr = cur_ptr->next;
        cur_ptr->next = prev_ptr;

        prev_ptr = cur_ptr;
        cur_ptr = next_ptr;
    }
    //prev_ptr will point to the last node after the loop
    return prev_ptr;
}

node* reverseRecursive(node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* new_head = reverseRecursive(head->next);

    head->next->next = head;
    head->next = NULL;
    return new_head;
}

int main(){
    node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);

    node* new_head = reverseRecursive(head);
    display(new_head);
}