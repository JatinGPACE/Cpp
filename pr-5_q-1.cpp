#include<iostream>
using namespace std;

struct college_info{
    string college_name;
    int college_code;
    string dept;
    int intake;
};

int main(){
    college_info c;
    c.college_name = "ABC College";
    c.college_code = 1234;
    c.dept = "Computer Science";
    c.intake = 50;
    cout<<"College name : "<<c.college_name<<endl;
    cout<<"College code : "<<c.college_code<<endl;
    cout<<"Department : "<<c.dept<<endl;
    cout<<"Intake : "<<c.intake<<endl;
    return 0;
}