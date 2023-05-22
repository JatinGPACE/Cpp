#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        void get(){
            cout<<"Enter the value of A : ";
            cin>>a;
        }
        void display(){
            cout<<"The value of A is : "<<a;
        }
};

class B: public A{};

int main(){
    B a;
    a.get();
    a.display();
    return 0;
}