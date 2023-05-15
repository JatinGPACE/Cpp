#include<iostream>
using namespace std;

void swapNumbers(int &num1, int &num2);
void sortNumbers(int &num1, int &num2);

int main(){
    int num1, num2;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    cout<<"Before sorting : "<<endl<<"num1 : "<<num1<<endl<<"num2 : "<<num2<<endl;
    sortNumbers(num1, num2);
    cout<<"After sorting : "<<endl<<"num1 : "<<num1<<endl<<"num2 : "<<num2<<endl;
    return 0;
}

void swapNumbers(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void sortNumbers(int &num1, int &num2){
    if(num1 > num2)
        swapNumbers(num1, num2);
}