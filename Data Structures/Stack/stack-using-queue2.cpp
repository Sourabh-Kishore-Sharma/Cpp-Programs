/*
Implement stack using queue (pop costly)

For each pop, we use a temporary queue,
enqueue all elements into temp,
pop the element from queue, swap(q,temp)

For push, simply add elements in the queue
*/
#include "iostream"
#include "queue"
using namespace std;


class stack{
    queue<int> q;
    queue<int> temp;

    public:
        void push(int x){
            q.push(x);
        }

        void pop(){
            if(q.empty()){
                cout<<"No elements to pop."<<endl;
                return;
            }
            while(q.size()!=1){
                temp.push(q.front());
                q.pop();
            }
            q.pop();
            swap(q, temp);
        }

        int peek(){
            if(q.empty()){
                cout<<"No elements to display."<<endl;
                return -1;
            }
            while(q.size()!=1){
                temp.push(q.front());
                q.pop();
            }
            int ans = q.front();
            temp.push(ans);
            swap(q, temp);

            return ans;
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