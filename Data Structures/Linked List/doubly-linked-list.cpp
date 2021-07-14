/*
In a doubly linked list each node with have 3 fields.
i) Previous pointer pointing to the previous node
ii) Data
iii) Next pointer pointing to the next node
*/
#include "iostream"
using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* next;

        node(int val){
            data = val;
            prev = NULL;
            next = NULL;
        }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        head = n;
        return;
    }

    n->next = head;
    head->prev = n;
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        insertAtHead(head, val);
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    return;
}

void display(node* head){
    if(head == NULL)
        return;
    
    cout<<endl;
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    cout<<endl;
}

int main(){

    node* head = NULL;

    int ch;
    while(1){

        cout<<"Select your Option \n"
        "1. Insert At Head\n"
        "2. Insert At Tail\n"
        "3. Display\n"
        "Enter your choice : ";
        cin>>ch;

        int val;
        switch (ch)
        {
            case 1:
                cin>>val;
                insertAtHead(head, val);
                break;
            case 2:
                cin>>val;
                insertAtTail(head, val);
                break;
            case 3:
                display(head);
                break;
            default:
                break;
        }

    }
}