/*
A virtual function is a member function which is present in the
base class and redefined by the derived class.

When we use the same function name in both base and derived class, 
the function in base class is declared with a keyword virtual.

When the function is made virtual, then C++ determines at run-time
which function is to be called based on the type of the 
object pointed by the base class pointer.
*/
#include "iostream"
using namespace std;

class base{
    public:
        virtual void print(){
            cout<<"Print function of base class."<<endl;
        }

        void disp(){
            cout<<"Disp function of the base class."<<endl;
        }
};

class derived : public base{
    public:
        void print(){
            cout<<"Print function of derived class."<<endl;
        }

        void disp(){
            cout<<"Disp function of the derived class."<<endl;
        }
};

int main(){
    base *base_ptr;
    derived d;
    base_ptr = &d;

    //Note : We use the arrow operator for pointers and not dot operator

    //Virtual function binded at run-time
    base_ptr -> print();

    //Non-Virtual function binded at compile-time
    base_ptr -> disp();
}