#include <iostream>
using namespace std;

#define SIZE 10

int main()
{
    int numbers[SIZE], sum = 0, temp = 0, i, j;
    float average = 0;
    cout << "Enter 10 numbers : ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }
    average = sum / 10.0;
    cout << "Sum : " << sum << endl;
    cout << "Average : " << average << endl;
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    cout << "Sorted array (ascending order) : " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << endl;
    }
    return 0;
}