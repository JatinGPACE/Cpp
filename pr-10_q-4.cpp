#include<iostream>
using namespace std;

class myClass{
    private:
        int val;
    public:
        myClass(){
            val = 0;
            cout<<"Default constructor called"<<endl;
        }
        myClass(int v){
            val = v;
            cout<<"Overloaded parameterized constructor called"<<endl;
        }
        void displayVal(){
            cout<<val<<endl;
        }
};

int main(){
    myClass v1;
    v1.displayVal();
    myClass v2(5);
    v2.displayVal();
    return 0;
}