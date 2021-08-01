/*
Program to implement queue using stack.

We keep two stacks, we enqueue into stack 1.
For dequeue, we shift elements into another stack.

1) enqueue operation
    Push x into stack 1
2) dequeue operation
    a) If both stacks are empty then return error.
    b) If stack 2 is empty,
        push everthing from stack 1 to stack 2
    c) Pop the element from stack 2 and return
*/
#include "iostream"
#include "stack"
using namespace std;

class queue{
    stack<int> s1;
    stack<int> s2;

    public:
        void enqueue(int x){
            s1.push(x);
        }

        int dequeue(){
            if(s1.empty() && s2.empty()){
                cout<<"Nothing to delete."<<endl;
                return -1;
            }

            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
                
            int top_elem = s2.top();
            s2.pop();
            return top_elem;
        }

        bool empty(){
            if(s1.empty() && s2.empty())
                return true;
            return false;
        }
};

int main(){
    queue q;
    
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
}