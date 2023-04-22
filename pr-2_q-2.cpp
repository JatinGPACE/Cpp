#include<iostream>
using namespace std;

int main(){
    int i, j, s, a = 1;
    for(i = 0; i <= 4; i++){
        for(s = 4; s > i; s--){
            cout<<" ";
        }
        for(j = 1; j <= i; j++){
            cout<<" "<<a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}