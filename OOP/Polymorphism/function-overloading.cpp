/*
Method overloading is a technique which allows you to have 
more than one function with the same function name but with different functionality.

Method overloading can be possible on the following basis:
    1. The return type of the overloaded function. (not sufficient alone)
    2. The type of the parameters passed to the function.
    3. The number of parameters passed to the function.
*/
#include "iostream"
using namespace std;

class Functions{
    public:
        void func(){
            cout<<"Function with no arguments."<<endl;
        }

        void func(int param){
            cout<<"Function with one int argument."<<endl;
        }

        void func(double param){
            cout<<"Function with a double argument."<<endl;
        }
};

int main(){
    Functions obj;
    obj.func();
    obj.func(10);
    obj.func(2.5);
}