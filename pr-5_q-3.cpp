#include<iostream>
using namespace std;

class distanceConverter{
    private:
        float distance_cm;
        float distance_in;
        float distance_ft;
        float distance_m;
        float distance_km;
    public:
        void get_distance(){
            cout<<"Enter distance in cm : ";
            cin>>distance_cm;
        }
        void convet_distance(){
            distance_in = distance_cm / 2.54;
            distance_ft = distance_in / 12;
            distance_m = distance_cm / 100;
            distance_km = distance_m / 1000;
        }
        void display_distance(){
            cout<<"Distance in inches : "<<distance_in<<endl;
            cout<<"Distance in feet : "<<distance_ft<<endl;
            cout<<"Distance in meter : "<<distance_m<<endl;
            cout<<"Distance in kilometer : "<<distance_km<<endl;
        }
};

int main(){
    distanceConverter d;
    d.get_distance();
    d.convet_distance();
    d.display_distance();
    return 0;
}