#include <iostream>
using namespace std;

int main()
{
    int original, copy, result = 0, index, modulo;
    cout << "Enter a number to check whether it is armstrong number or not : ";
    cin >> original;
    copy = original;
    for (index = 0; copy > 0; index++)
    {
        modulo = copy % 10;
        result += modulo * modulo * modulo;
        copy /= 10;
    }
    if (result == original)
    {
        cout << original << " is a armstrong number.";
    }
    else
    {
        cout << original << " is not a armstrong number.";
    }
}