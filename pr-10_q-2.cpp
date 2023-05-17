#include<iostream>
using namespace std;

class myClass{
    private: 
        int value;
    public:
        myClass(){
            value = 0;
        }
        myClass(int val){
            value = val;
        }
        myClass(const myClass &obj){
            value = obj.value;
        }
        int getValue(){
            return value;
        }
};

int main(){
    myClass obj1(10);
    myClass obj2(obj1);
    cout<<"Obj 1 value : "<<obj1.getValue()<<endl<<"Obj 2 value : "<<obj2.getValue()<<endl;
    return 0;
}