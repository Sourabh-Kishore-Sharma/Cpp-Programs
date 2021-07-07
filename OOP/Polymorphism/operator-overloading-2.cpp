/*
Operator overloading is defined as the standard operator can be redefined 
so that it has a different meaning when applied to
the instances of a class.

Overloading of + operator.
Program to add two complex numbers.
*/
#include "iostream"
using namespace std;

class Complex{
    int real, img;
    public:
        Complex(){
            real = 0;
            img = 0;
        }

        Complex(int r, int i){
            real = r;
            img = i;
        }

        Complex operator + (Complex &o){
            Complex result;
            result.real = real + o.real;
            result.img = img + o.img;
            return result;
        }

        void disp(){
            cout<<real<<" + i"<<img<<endl;
        }
};

int main(){
    Complex c1(10, 5);
    Complex c2(5, 10);
    Complex c3 = c1 + c2;
    c3.disp();
}
