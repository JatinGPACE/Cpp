#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile("text.txt");
    if (!infile)
    {
        cout << "Infile not found!";
        return 1;
    }
    ofstream outfile("text2.txt");
    if (!outfile)
    {
        cout << "Outfile not found!";
        return 1;
    }
    char ch;
    while (infile >> ch)
    {
        outfile << ch;
    }
    infile.close();
    outfile.close();
    cout << "Content copied.";
    return 0;
}