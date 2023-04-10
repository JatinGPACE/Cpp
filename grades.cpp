#include<iostream>
using namespace std;

int main(){
    int marks[5], index, total = 0;
    float avg;
    cout<<"Enter marks for 5 subjects out of 100 : ";
    for(index = 0; index < 5; index++){
        cin>>marks[index];
        total += marks[index];
    }
    avg = total / 5.0;
    cout<<"Average : "<<avg<<endl;
    if(avg >= 80){
        cout<<"Grade : A";
    }
    else if(avg >= 60){
        cout<<"Grade : B";
    }
    else if(avg >= 33){
        cout<<"Grade : C";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}