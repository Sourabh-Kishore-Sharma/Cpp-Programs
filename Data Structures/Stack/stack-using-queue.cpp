/*
Prgram to implement stack using queue. (push costly method)

For each push, we use a temporary queue, enqueue x first, and then
enqueue the elements from the other queue.
*/
#include "iostream"
#include "queue"
using namespace std;

#define n 100

class stack{
    queue<int> q;
    queue<int> temp;

    public:
        void push(int x){
            temp.push(x);
            while (!q.empty()){
                temp.push(q.front());
                q.pop();
            }
            swap(q,temp);
        }

        void pop(){
            q.pop();
        }

        int peek(){
            return q.front();
        }

        bool empty(){
            return q.empty();
        }
};

int main(){
    stack st;
    
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    return 0;
}
