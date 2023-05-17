#include<iostream>
using namespace std;

class complex{
    private:
        float real, imag;
    public:
        complex(){
            real = 0;
            imag = 0;
        }
        complex(float r, float i){
            real = r;
            imag = i;
        }
        void display(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        friend complex add(complex c1, complex c2);
};

complex add(complex c1, complex c2){
    float r = c1.real + c2.real;
    float i = c1.imag + c2.imag;
    return complex(r, i);
}

int main(){
    complex c1(2.5, 3.5);
    complex c2(1.5, 2.5);
    complex sum = add(c1, c2);
    cout<<"Complex number 1 : ";
    c1.display();
    cout<<"Complex number 2 : ";
    c2.display();
    cout<<"Sum : ";
    sum.display();
    return 0;
}