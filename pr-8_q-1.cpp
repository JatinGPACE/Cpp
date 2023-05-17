#include<iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance(){
            feet = 0;
            inches = 0;
        }
        Distance(int f, float i){
            feet = f;
            inches = i;
        }
        void input(){
            cout<<"Enter feet : ";
            cin>>feet;
            cout<<"Enter inches : ";
            cin>>inches;
        }
        void output(){
            cout<<feet<<"Feet"<<inches<<"inches"<<endl;
        }
        Distance add(Distance d1,Distance d2){
            int f = d1.feet + d2.feet;
            float i = d1.inches + d2.inches;
            if(i >= 12){
                f += 1;
                i -= 12;
            }
            return Distance(f, i);
        }
};

int main(){
    Distance d1, d2, sum;
    cout<<"Enter distance 1 : "<<endl;
    d1.input();
    cout<<"Enter distance 2 : "<<endl;
    d2.input();
    sum = sum.add(d1, d2);
    cout<<"Distance 1 : ";
    d1.output(); 
    cout<<"Distance 2 : ";
    d2.output(); 
    cout<<"Sum : ";
    sum.output();
    return 0;
}