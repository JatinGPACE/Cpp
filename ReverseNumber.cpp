#include <iostream>
using namespace std;

int main()
{
    int original, reversed = 0, modulo, index;
    cout << "Enter a number to reverse : ";
    cin >> original;
    for (index = 0; original > 0; index++)
    {
        modulo = original % 10;
        reversed = reversed * 10 + modulo;
        original /= 10;
    }
    cout << "Reversed : " << reversed;
    return 0;
}