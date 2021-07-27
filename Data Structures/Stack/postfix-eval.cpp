#include "iostream"
#include "stack"
#include "math.h"
using namespace std;

int postfixEvaluation(string s){
    stack<int> st;

    for(int i=0; i<s.length(); i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int operand_2 = st.top();
            st.pop();
            int operand_1 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(operand_1+operand_2);
                break;
            case '-':
                st.push(operand_1-operand_2);
                break;
            case '*':
                st.push(operand_1*operand_2);
                break;
            case '/':
                st.push(operand_1/operand_2);
                break;
            case '^':
                st.push(pow(operand_1,operand_2));
                break;
            }
        }
    }
    return st.top();
}

int main(){
    string s = "42*3+";
    cout<<postfixEvaluation(s)<<endl;

    string s1 = "46+2/5*7+";
    cout<<postfixEvaluation(s1)<<endl;
}