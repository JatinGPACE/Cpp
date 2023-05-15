#include<iostream>
using namespace std;

int findMax(int a, int b, int c);
float findMax(float a, float b, float c);

int main(){
    int maximum = findMax(4,6,2);
    float maximum2 = findMax(3.1f, 4.1f, 5.1f);
    cout<<"Maximum from int func : "<<maximum<<endl<<"Maximum from float func : "<<maximum2;
    return 0;
}

int findMax(int a, int b, int c){
    if(a > b && b > c)
        return a;
    else if(b > a && b > c)
        return b;
    else
        return c;
}

float findMax(float a, float b, float c){
    if(a > b && b > c)
        return a;
    else if(b > a && b > c)
        return b;
    else
        return c;
}