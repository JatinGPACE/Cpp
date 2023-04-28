// Banking System

#include <iostream>
#include <conio.h>
using namespace std;

int SIZE;

void clrscr();
void pressEnterToContinue();
void printMenu();

class info
{
private:
    string accNo, name;
    float balance;

public:
    void getAccNo();
    void getName();
    void setBalance();
    void showData();
    int searchAccount(info *customers);
    void depositAmount(info *customers);
    void withdrawAmount(info *customers);
    void transferAmount(info *customers);
    void editInfo(info *customers);
};

int main()
{
    int index, choice, searchAccNo;
    clrscr();
    do
    {
        cout << "Enter the number of customers you want to add : ";
        cin >> SIZE;
        if (SIZE <= 0)
        {
            cout << "Invlaid size!" << endl;
        }
    } while (SIZE <= 0);

    clrscr();

    info customers[SIZE];

    for (index = 0; index < SIZE; index++)
    {
        cout << "Enter information for #" << index + 1 << "th customer :" << endl;
        customers[index].getAccNo();
        customers[index].getName();
        customers[index].setBalance();
    }
    cout << "All information stored successfully!" << endl;
    pressEnterToContinue();

    do
    {
        clrscr();
        printMenu();
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            clrscr();
            cout << "Bye!" << endl;
            break;

        case 1:
            clrscr();
            for (index = 0; index < SIZE; index++)
            {
                customers[index].showData();
            }
            pressEnterToContinue();
            break;

        case 2:
            clrscr();
            searchAccNo = customers->searchAccount(customers);
            if (searchAccNo == -1)
            {
                cout << "Invlaid account number!" << endl;
            }
            else
            {
                clrscr();
                customers[searchAccNo].showData();
            }
            pressEnterToContinue();
            break;

        case 3:
            clrscr();
            customers->depositAmount(customers);
            pressEnterToContinue();
            break;

        case 4:
            clrscr();
            customers->withdrawAmount(customers);
            pressEnterToContinue();
            break;

        case 5:
            clrscr();
            customers->transferAmount(customers);
            pressEnterToContinue();
            break;

        case 6:
            clrscr();
            customers->editInfo(customers);
            pressEnterToContinue();
            break;

        default:
            cout << "Invlaid choice!" << endl;
            pressEnterToContinue();
            break;
        }
    } while (choice != 0);

    getch();
    return 0;
}

void clrscr()
{
    system("cls");
}

void pressEnterToContinue()
{
    cout << "Press ENTER to continue" << endl;
    getch();
}

void printMenu()
{
    cout << "Press 0 to exit." << endl;
    cout << "Press 1 to get information of all customers." << endl;
    cout << "Press 2 to get information of patricular customer." << endl;
    cout << "Press 3 to deposit money." << endl;
    cout << "Press 4 to withdraw money." << endl;
    cout << "Press 5 to transfer money." << endl;
    cout << "Press 6 to edit the information of the customer." << endl;
}

void info ::getAccNo()
{
    cout << "Enter the account number : ";
    cin >> accNo;
}

void info ::getName()
{
    fflush(stdin);
    cout << "Enter the name : ";
    getline(cin, name);
}

void info ::setBalance()
{
    balance = 0;
}

void info ::showData()
{
    cout << "Account number : " << accNo << endl;
    cout << "Name : " << name << endl;
    cout << "Balance : " << balance << endl;
}

int info ::searchAccount(info *customers)
{
    int index;
    string accountNumber;
    cout << "Enter the account number : ";
    fflush(stdin);
    cin >> accountNumber;
    for (index = 0; index < SIZE; index++)
    {
        if (accountNumber == customers[index].accNo)
        {
            return index;
        }
    }
    return -1;
}

void info ::depositAmount(info *customers)
{
    int searchAccNumber;
    float amount;
    searchAccNumber = customers->searchAccount(customers);
    if (searchAccNumber == -1)
    {
        cout << "Invlaid account number!" << endl;
    }
    else
    {
        cout << "Enter the amount you want to deposit : ";
        cin >> amount;
        customers[searchAccNumber].balance += amount;
        cout << "Money deposited successfully!" << endl;
    }
}

void info ::withdrawAmount(info *customers)
{
    int searchAccNumber;
    float amount;
    searchAccNumber = customers->searchAccount(customers);
    if (searchAccNumber == -1)
    {
        cout << "Invlaid account number!" << endl;
    }
    else
    {
        cout << "Enter the amount you want to withdraw : ";
        cin >> amount;
        if (amount > customers[searchAccNumber].balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            customers[searchAccNumber].balance -= amount;
            cout << "Money withdrawed successfully!" << endl;
        }
    }
}

void info ::transferAmount(info *customers)
{
    int index1, index2, flag1 = 0, flag2 = 0, flag3 = 0;
    string accountFrom, accountTo;
    float amount;
    do
    {
        cout << "Enter the account number from which you want to transfer the money : ";
        fflush(stdin);
        cin >> accountFrom;
        for (index1 = 0; index1 < SIZE; index1++)
        {
            if (accountFrom == customers[index1].accNo)
            {
                do
                {
                    cout << "Enter the account number in which you want to transfer the money : ";
                    fflush(stdin);
                    cin >> accountTo;
                    for (index2 = 0; index2 < SIZE; index2++)
                    {
                        if (accountTo == customers[index2].accNo)
                        {
                            if (accountTo == accountFrom)
                            {
                                cout << "Can't transfer money to the same account!" << endl;
                                flag2++;
                            }
                            else
                            {
                                cout << "Enter the amount : ";
                                fflush(stdin);
                                cin >> amount;
                                if (amount > customers[index1].balance)
                                {
                                    cout << "Insufficient balance!" << endl;
                                }
                                else
                                {
                                    customers[index1].balance -= amount;
                                    customers[index2].balance += amount;
                                    cout << "Transaction successful!" << endl;
                                }
                                flag3++;
                            }
                        }
                    }
                    if (flag3 == 0 && flag2 == 0)
                    {
                        cout << "Invlaid account number!" << endl;
                    }
                    flag2 = 0;
                } while (flag3 <= 0);
                flag1++;
            }
        }
        if (flag1 == 0)
        {
            cout << "Invalid account number!" << endl;
        }
    } while (flag1 <= 0);
}

void info ::editInfo(info *customers)
{
    int searchAccNo = searchAccount(customers), choice;
    string newAccNo, newName;
    if (searchAccNo == -1)
    {
        cout << "Invlaid account number!" << endl;
    }
    else
    {
        do
        {
            clrscr();
            cout << "Press 1 to edit account number." << endl;
            cout << "Press 2 to edit name." << endl;
            cout << "Enter your choice : ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Enter the new account number : ";
                cin >> newAccNo;
                customers[searchAccNo].accNo = newAccNo;
                cout << "Information edited successfully!" << endl;
                break;

            case 2:
                cout << "Enter the new name : ";
                fflush(stdin);
                getline(cin, newName);
                customers[searchAccNo].name = newName;
                cout << "Information edited successfully!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
                pressEnterToContinue();
                break;
            }
        } while (choice != 1 && choice != 2);
    }
}
