#include<iostream>
using namespace std;

float AOC(float radius, float pi= 3.14);

int main(){
    float radius;
    cout<<"Enter the radius of the circle : ";
    cin>>radius;
    float aoc = AOC(radius);
    cout<<"Area of the circle : "<<aoc;
    return 0;
}

float AOC(float radius, float pi){
    return pi*radius*radius;
}