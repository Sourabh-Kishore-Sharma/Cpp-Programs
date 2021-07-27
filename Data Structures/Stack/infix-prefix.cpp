/*
Program to convert a given infix expression to its equivalent prefix expression.
(a-b/c)*(a/k-l)

Step1. Reverse the given string
        )l-k/a(*)c/b-a(

Step2. Correction of brackets
        (l-k/a)*(c/b-a)

Step3. Apply infix to postfix algorithm
        lka/-cb/a-*

Step4. Reverse the above string
        *-a/bc-/akl
*/
#include "iostream"
#include "stack"
#include "algorithm"
using namespace std;

int precedence(char ch){
    if (ch=='^')
        return 3;
    else if(ch=='*' || ch=='/')
        return 2;
    else if(ch=='+' || ch=='-')
        return 1;
    else
        return -1;
}

string infixToPrefix(string s){
    reverse(s.begin(),s.end());

    for(int i=0; i<s.length(); i++){
        if (s[i]=='(')
            s[i] = ')';
        else if(s[i]==')')
            s[i] = '(';
    }

    stack<char> st;
    string res="";
    for(int i=0; i<s.length(); i++){

        if( (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && (precedence(st.top())>precedence(s[i]))){
                res+=st.top();
                st.pop();
        }
        st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}


int main(){
    string s = "(a-b/c)*(a/k-l)";
    cout<<infixToPrefix(s)<<endl;
}
