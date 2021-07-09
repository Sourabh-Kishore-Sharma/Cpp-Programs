/*
*/
#include "iostream"
using namespace std;

class node{
    public:
        //Valur of the node
        int data;
        //Pointer of the node to point to the next node
        node* next;

        //Constructor to create a node
        node(int val){
            data = val;
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
    head = n;
}

void insertAtTail(node* &head,int val){
    //Take head as call-by-reference since we need to 
    //modify the original linked link
    node* n = new node(val);

    if(head==NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

bool linearSearch(node* head, int key){
    if(head == NULL)
        return false;
    
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

void display(node* head){
    //Head itself can be used to traverse istead of temp
    //Since its call-by-value, it will not modify the head position in original linked list
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    int val;

    while(true){
        cout<<"Select an option\n"
        "1. Insert at Tail\n"
        "2. Insert at Head\n"
        "3. Search\n"
        "4. Display\n";

        int ch;
        cout<<"Enter your Choice : ";
        cin>>ch;

        switch(ch){
            case 1: 
                cin>>val;
                insertAtTail(head, val);
                break;
            case 2:
                cin>>val;
                insertAtHead(head, val);
                break;
            case 3:
                int key;
                cout<<"Element to search : ";
                cin>>key;
                cout<<linearSearch(head, key)<<endl;
                break;
            case 4:
                display(head);
                break;
            default:
                cout<<"Invalid Option.\n";
        }
    }
    return 0;
}