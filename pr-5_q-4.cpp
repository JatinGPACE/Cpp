#include<iostream>
using namespace std;

class item{
    private: 
        int item_number;
        float item_cost;
    public: 
        void put_data(){
            cout<<"Item number : "<<item_number<<endl;
            cout<<"Item cost : "<<item_cost<<endl;
        }
        friend void get_data(item &i);
};

void get_data(item &i){
    cout<<"Enter item number : ";
    cin>>i.item_number;
    cout<<"Enter item cost : ";
    cin>>i.item_cost;
}
int main(){
    item i;
    get_data(i);
    i.put_data();
    return 0;
}
