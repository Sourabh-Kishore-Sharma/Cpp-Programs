/*
Program to implement operations of queue using linked list.

enqueue() - Function to insert element at rear
dequeue() - Function to delete element at front
peek() - Function to print element at front
empty() - To check whether queue is empty or not.
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

class queue{
    node* front;
    node* rear;

    public:
        queue(){
            front = NULL;
            rear = NULL;
        }

        void enqueue(int x){
            node* n = new node(x);
            
            if(front == NULL){
                front = n;
                rear = n;
                return;
            }
            rear->next = n;
            rear = n;
        }

        void dequeue(){
            if(front==NULL){
                cout<<"Nothing to delete."<<endl;
                return;
            }
            node* to_delete = front;
            front = front->next;
            delete to_delete;
        }

        int peek(){
            if(front==NULL){
                cout<<"No elements in queue."<<endl;
                return -1;
            }
            return front->data; 
        }

        bool empty(){
            if(front==NULL)
                return true;
            return false;
        }
};

int main(){
    queue q;
    cout<<q.empty()<<endl;
    cout<<q.peek()<<endl;
    q.enqueue(10);
    cout<<q.peek()<<endl;
    q.enqueue(20);
    cout<<q.peek()<<endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();    
    cout<<q.empty()<<endl;
}
