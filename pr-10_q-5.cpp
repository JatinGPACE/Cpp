#include<iostream>
using namespace std;

class myClass{
    private:
        int val;
    public:
        myClass(int v){
            val = v;
            cout<<"Constructor called"<<endl;
        }
        ~myClass(){
            cout<<"Destructor called"<<endl;
        }
};

int main(){
    myClass v1(5);
    return 0;
}