#include <iostream>
using namespace std;

int a = 10;

int main()
{
    int a = 15;
    cout << "Local variable : " << a << endl;
    cout << "Global variable : " << ::a;
    return 0;
}