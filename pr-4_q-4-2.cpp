#include<iostream>
using namespace std;

string findMax(string a, string b);
string findMax(string a, string b, string c);

int main(){
    string maxString = findMax("Apple", "Banana");
    string maxString2 = findMax("Apple", "Mango", "Banana");
    cout<<"Max from 2 strings : "<<maxString<<endl;
    cout<<"Max from 3 strings : "<<maxString2;
    return 0;
}
string findMax(string a, string b){
    if(a > b)
        return a;
    else
        return b;
}

string findMax(string a, string b, string c){
    if(a > b && b > c)
        return a;
    else if(b > a && b > c)
        return b;
    else
        return c;
}