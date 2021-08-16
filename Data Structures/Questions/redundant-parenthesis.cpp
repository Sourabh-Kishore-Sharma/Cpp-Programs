/*
Given a valid mathematical expression, find whether it has
redundant arenthesis or not.
It contains operators : +,-,*,/
*/
#include "iostream"
#include "stack"
using namespace std;

bool redundantParenthesis(string s){
    stack<char> st;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/'){
                while(st.top()!='(')
                    st.pop();
                st.pop();
            }
            else
                return true;
        }
    }
    return false;
}

int main(){
    string s1 = "((a+b))";
    string s2 = "(a+(a+b))";
    string s3 = "a+(a+b+c)";

    cout<<redundantParenthesis(s1)<<endl;
    cout<<redundantParenthesis(s2)<<endl;
    cout<<redundantParenthesis(s3)<<endl;
}