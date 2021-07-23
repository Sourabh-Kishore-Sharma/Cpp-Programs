#include "iostream"
#include "stack"
using namespace std;

void insertAtBottom(stack<int> &st, int elem){
    if(st.empty()){
        st.push(elem);
        return;
    }

    int top_elem = st.top();
    st.pop();
    insertAtBottom(st, elem);

    st.push(top_elem);
}

void reverse(stack<int> &st){

    if(st.empty())
        return;

    int elem = st.top();
    st.pop();
    reverse(st);

    insertAtBottom(st, elem);
}


int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverse(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}