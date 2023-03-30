#include <iostream>
using namespace std;

int main()
{
    int original, copy, result = 0, index, modulo;
    cout << "Enter a number to check whether a number is palindrome number or not : ";
    cin >> original;
    copy = original;
    for (index = 0; copy > 0; index++)
    {
        modulo = copy % 10;
        result = result * 10 + modulo;
        copy /= 10;
    }
    cout << "Reversed number is " << result << "." << endl;
    if (result == original)
    {
        cout << original << " is a palindrome number.";
    }
    else
    {
        cout << original << " is not a palindrome number.";
    }
    return 0;
}
