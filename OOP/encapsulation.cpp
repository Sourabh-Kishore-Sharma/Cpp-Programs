/*
Hiding "sensitive" data from the user.

                Own Class       Derived (Inherited) Class       Outside Class
Public             Yes                  Yes                         Yes
Private            Yes                  No                          No     
Protected          Yes                  Yes                         No
*/
#include "iostream"
using namespace std;

class A{

    public:
    int a;
    void f1(){
        cout<<"Function 1 : Public"<<endl;
    }

    private:
    int b;
    void f2(){
        cout<<"Function 2 : Private"<<endl;
    }

    protected:
    int c;
    void f3(){
        cout<<"Function 3 : Protected"<<endl;
    }
};

int main(){
    A obj;
    obj.f1();
    obj.f2();
    obj.f3();
}