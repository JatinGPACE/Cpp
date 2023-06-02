#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream infile("text.txt");
    int characterCount = 0;
    char ch;
    if (!infile)
    {
        cout << "File not found!";
        return 1;
    }
    while (infile >> ch)
    {
        characterCount++;
    }
    infile.close();
    cout << "Total characters : " << characterCount;
    return 0;
}