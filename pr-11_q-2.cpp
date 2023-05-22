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
            cout<<"The value of member of class A is : "<<a<<endl;
        }
};

class B: public A{};

class C: public B{};

int main(){
    C a;
    a.getA();
    a.displayA();
    return 0;
}