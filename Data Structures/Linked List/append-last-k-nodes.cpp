/*
Program to append last k nodes to the
start of the linked list.
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
    if(head==NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    return;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int length(node* head){
    node* temp = head;
    int l=0;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    
    return l;
}

node* appendKnodes(node* &head, int K){
    int L = length(head);
    //If the given K is larger than linked list length
    K = K%L;

    if(K==0)
        return head;

    node* new_head;
    node* new_tail;
    node* tail=head;

    int count=1;

    while(tail->next!=NULL){

        if(count==(L-K))
            new_tail = tail;
        
        if(count==(L-K+1))
            new_head = tail;
        
        tail = tail->next;
        count++;
    }

    //Corner case
    if(K==1)
        new_head = tail;

    new_tail->next = NULL;
    tail->next = head;
    return new_head;

}

int main(){
    node* head = NULL;
    int values[] = {1,2,3,4,5,6};

    for(int i=0; i<6; i++){
        insert(head, values[i]);
    }
    display(head);

    node* new_head = appendKnodes(head, 3);
    display(new_head);
}

