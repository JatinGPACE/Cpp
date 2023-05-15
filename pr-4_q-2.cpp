#include<iostream>
using namespace std;

inline int multiply(int num1,int num2){
    return num1 * num2;
}

int main(){
    int num1, num2;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    int result = multiply(num1, num2);
    cout<<"Multiplication : "<<result;
    return 0;
}