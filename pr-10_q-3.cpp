#include<iostream>
using namespace std;

class myClass{
    private : 
        int val;
    public :
        myClass(int v){
            val = v;
            cout<<"Parameterized constructor called"<<endl;
        }
        void displayVal(){
            cout<<val;
        }
};

int main(){
    myClass v1(5);
    v1.displayVal();
    return 0;
}