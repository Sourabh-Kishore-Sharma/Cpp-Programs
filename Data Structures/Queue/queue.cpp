/*
Implementation of queue using array
*/
#include "iostream"
using namespace std;

#define n 100

class queue{
    int* arr;
    int front;
    int rear;
    public:
        queue(){
            arr = new int[n];
            front = -1;
            rear = -1;
        }

        void enqueue(int x){
            if(rear==n-1){
                cout<<"Queue Overflow"<<endl;
                return;
            }

            rear++;
            arr[rear] = x;

            if(front==-1)
                front++;
        }

        void dequeue(){
            if(front==-1 || front>rear){
                cout<<"Nothing to delete."<<endl;
                return;
            }
            front++;
        }

        int peek(){
            if(front==-1 || front>rear){
                cout<<"Nothing to delete."<<endl;
                return -1;
            }
            return arr[front];
        }

        bool empty(){
            if(front==-1 || front>rear){
                cout<<"No elements in queue."<<endl;
                return true;
            }
            return false;
        }
};

int main(){
    int x;
    int ch;
    queue q;

    while(1){
        cout<<"1. Insert at Front\n"
        "2. Delete at Front\n"
        "3. Is Empty\n"
        "4. Display at Front\n";

        cin>>ch;
        switch (ch)
        {
        case 1:
            cin>>x;
            q.enqueue(x);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            cout<<q.empty()<<endl;
            break;
        case 4:
            cout<<q.peek()<<endl;
            break;
        }
    }
}
