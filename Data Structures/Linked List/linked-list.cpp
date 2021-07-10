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

void deleteAtHead(node* &head){
    if(head == NULL){
        cout<<"Linked List is empty!!!"<<endl;
        return;
    }
    node* to_delete = head;
    node* temp = head->next;
    head = temp;
    delete to_delete;
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

void deleteByValue(node* &head, int key){
    if(head == NULL){
        cout<<"Linked List is empty!!!"<<endl;
        return;
    }
    if(linearSearch(head, key)){
        if(head->next == NULL){
            if(head->data == key)
                deleteAtHead(head);
            return;
        }

        node* temp = head;
        while(temp->next->data != key){
            temp = temp->next;
        }

        //We have to delete temp->next 
        node* to_delete = temp->next;
        temp->next = temp->next->next;
        delete to_delete;
    }
    else{
        cout<<"Not Found."<<endl;
        return;
    }
        
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
    int val, key;

    while(true){
        cout<<"\nSelect an option\n"
        "1. Insert at Tail\n"
        "2. Insert at Head\n"
        "3. Delete at Head\n"
        "4. Delete by value\n"
        "5. Search\n"
        "6. Display\n\n";

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
                deleteAtHead(head);
                break;
            case 4:
                cin>>key;
                deleteByValue(head, key);
                break;
            case 5:
                cout<<"Element to search : ";
                cin>>key;
                cout<<linearSearch(head, key)<<endl;
                break;
            case 6:
                display(head);
                break;
            default:
                cout<<"Invalid Option.\n";
        }
    }
    return 0;
}