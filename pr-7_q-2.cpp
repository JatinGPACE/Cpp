#include<iostream>
using namespace std;

class myClass{
    private:
        static int myVar;
    public:
        static void increment(){
            myVar = 3;
        }
        static int getMyVar(){
            return myVar;
        }
};

int myClass::myVar = 1;

int main(){
    cout<<"Initial value of myVar : "<<myClass::getMyVar()<<endl;
    myClass::increment();
    cout<<"Value of myVar after incrementing 3 times : "<<myClass::getMyVar()<<endl;
    return 0;
}