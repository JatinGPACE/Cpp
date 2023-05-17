#include<iostream>
using namespace std;

class Employee{
    private:
        int empCode;
        string empName;
    public:
        void getData(){
            cout<<"Enter employee code : ";
            cin>>empCode;
            cout<<"Enter employee name : ";
            cin>>empName;
        }
        void display(){
            cout<<"Employee code : "<<empCode<<endl;
            cout<<"Employee name : "<<empName<<endl;
        }
};

int main(){
    Employee emp[6];
    for(int i = 0; i < 6; i++){
        emp[i].getData();
    }
    for(int i = 0; i < 6; i++){
        emp[i].display();
    }
    return 0;
}