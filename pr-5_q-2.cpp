#include<iostream>
using namespace std;

class Employee{
    private:
        int emp_code;
        string emp_name;
        float basic, da, it, net_salary;
    public:
        void get_data(){
            cout<<"Enter employee number : ";
            cin>>emp_code;
            cout<<"Enter employee name : ";
            cin>>emp_name;
            cout<<"Enter basic salary : ";
            cin>>basic;
            cout<<"Enter da : ";
            cin>>da;
            cout<<"Enter it : ";
            cin>>it;
        }
        void calculate_salary(){
            net_salary = basic + da - it;
        }
        void display_data(){
            cout<<"Employee number : "<<emp_code<<endl;
            cout<<"Employee name : "<<emp_name<<endl;
            cout<<"Basic salary : "<<basic<<endl;
            cout<<"DA : "<<da<<endl;
            cout<<"IT : "<<it<<endl;
            cout<<"Net salary : "<<net_salary<<endl;
        }
};

int main(){
    Employee e;
    e.get_data();
    e.calculate_salary();
    e.display_data();
    return 0;
}