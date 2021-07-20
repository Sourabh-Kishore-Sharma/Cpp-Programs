/*
Program to implement circular linked list.
A linked list whose tail point to the head, hence forming a circle.
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

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        n->next = n;
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        insertAtHead(head, val);
        return;
    }

    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deleteAtHead(node* &head){
    if(head->next==head){
        delete head;
        return;
    }

    node* to_delete = head;

    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = head->next;
    head = head->next;
    delete to_delete;
}

void deleteAtPosition(node* &head, int pos){
    if(head==NULL)
        return;

    if(pos==0){
        return;
    }

    if(pos==1){
        deleteAtHead(head);
        return;
    }

    node* temp = head;

    int count=1;
    while(count!=pos-1){
        temp = temp->next;
        count++;
    }

    node* to_delete = temp->next;
    temp->next = temp->next->next;
    delete to_delete;
}

void display(node* head){
    if (head==NULL){
        return;
    }

    node* temp = head;
    while(temp->next!=head){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data<<"->head"<<endl;
}

int main(){
    node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    insertAtHead(head, 0);

    display(head);
    cout<<endl;
    deleteAtPosition(head, 1);

    display(head);
}