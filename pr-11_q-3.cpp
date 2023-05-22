#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        void getA(){
            cout<<"Enter the value of A : ";
            cin>>a;
        }
        void displayA(){
            cout<<"Value of the member of class A is : "<<a<<endl;
        }
};

class B{
    private:
        int b;
    public:
        void getB(){
            cout<<"Enter the value of B : ";
            cin>>b;
        }
        void displayB(){
            cout<<"Value of the member of class B is : "<<b<<endl;
        }
};

class C: public A, public B{};

int main(){
    C ab;
    ab.getA(); 
    ab.getB();
    ab.displayA();
    ab.displayB();
    return 0;
}