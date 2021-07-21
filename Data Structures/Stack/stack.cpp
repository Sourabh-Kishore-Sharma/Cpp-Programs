#include "iostream"
using namespace std;

#define n 100

class stack{
    int* arr;
    int top;

    public:
        stack(){
            arr = new int[n];
            top = -1;
        }

        void push(int x){
            if(top == n-1){
                cout<<"Stack Overflow."<<endl;
                return;
            }

            top++;
            arr[top] = x;
        }

        void pop(){
            if(top==-1){
                cout<<"Stack is empty."<<endl;
                return;
            }
            top--;
        }

        bool empty(){
            return top==-1;
        }

        int topValue(){
            return arr[top];
        }
};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.pop();
    cout<<s.topValue()<<endl;
    s.pop();
    cout<<s.empty()<<endl;
}