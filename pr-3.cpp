#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float kilometer;
    cout<<"Enter the distance in kilometers : ";
    cin>>kilometer;
    float centimeter = kilometer * 100.0;
    float meter = kilometer * 1000.0;
    float inches = meter * 39.3701;
    float feet = meter * 3.28084;
    cout<<setprecision(2)<<fixed;
    cout<<"Distance in centimeters : "<<setw(14)<<setfill(' ')<<centimeter<<endl;
    cout<<"Distance in meters : "<<setw(19)<<setfill(' ')<<meter<<endl;
    cout<<"Distance in centimeters : "<<setw(14)<<setfill(' ')<<centimeter<<endl;
    cout<<"Distance in centimeters : "<<setw(14)<<setfill(' ')<<centimeter<<endl;
    return 0;
}