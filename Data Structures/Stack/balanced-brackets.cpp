#include "iostream"
#include "stack"
using namespace std;

bool balancedBrackets(string s){
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(s[i]==')'){
                if(!st.empty() && st.top()!='(')
                    return false;
                else
                    st.pop();
            }
            else if(s[i]==']'){
                if(!st.empty() && st.top()!='[')
                    return false;
                else
                    st.pop();
            }
            else if(s[i]=='}'){
                if(!st.empty() && st.top()!='{')
                    return false;
                else
                    st.pop();
            }
        }
    }
    return st.empty();
}

int main(){
    string s1 = "{[()]}";
    string s2 = "{[()}]";

    cout<<balancedBrackets(s1)<<endl;
    cout<<balancedBrackets(s2)<<endl;
}