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

    n->next = head;

    if(head!=NULL)
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
}

void deleteAtHead(node* &head){
    if(head==NULL){
        return;
    }
    if(head->next == NULL){
        head = NULL;
        delete head;
        return;
    }

    node* to_delete = head;
    head = head->next;
    head->prev = NULL;

    delete to_delete;
}

void deleteByPosition(node* &head, int pos){
    if(pos == 1){
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    int count = 1;

    while(temp!=NULL && count!=pos){
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;

    if(temp->next!=NULL)
        temp->next->prev = temp->prev;

    delete temp;
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
        "3. Delete At Head\n"
        "4. Delete by position\n"
        "5. Display\n"
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
                deleteAtHead(head);
                break;
            case 4:
                int pos;
                cin>>pos;
                deleteByPosition(head, pos);
                break;
            case 5:
                display(head);
                break;
            default:
                break;
        }

    }

    return 0;
}