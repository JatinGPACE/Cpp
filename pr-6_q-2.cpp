#include<iostream>
using namespace std;

class student{
    private:
        string name;
        float SPI;
    public:
        void getData(){
            cout<<"Enter student name : ";
            fflush(stdin);
            cin>>name;
            cout<<"Enter SPI : ";
            cin>>SPI;
        }
        void display(){
            cout<<"Student name : "<<name<<endl;
            cout<<"SPI : "<<SPI<<endl;
        }
};
int main(){
    student s[10];
    for(int i = 0; i < 10; i++){
        s[i].getData();
    }
    for(int i = 0; i < 10; i++){
        s[i].display();
    }
    return 0;
}