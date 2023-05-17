#include<iostream>
using namespace std;

class Distance{
    private:
        int feet, inches;
    public:
         Distance(){
            feet = 0;
            inches = 0;
         }
         Distance(int f, int i){
            feet = f;
            inches = i;
         }
         void display(){
            cout<<feet<<"Feet"<<inches<<"inches"<<endl;
         }
};

int main(){
    Distance d1;
    cout<<"Distance d1 : ";
    d1.display();
    Distance d2(5, 6);
    cout<<"Distance d2 : ";
    d2.display();
    return 0;
}