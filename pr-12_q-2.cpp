#include <iostream>
using namespace std;

class vehicle
{
public:
    float distance, fuel;
    virtual float getMileage()
    {
        cout << "Enter the distance and fuel used : ";
        cin >> distance >> fuel;
        return distance / fuel;
    }
};

class two_wheeler : public vehicle
{
public:
    float distance, fuel;
    virtual float getMileage()
    {
        cout << "Enter the distance and fuel used : ";
        cin >> distance >> fuel;
        return distance / fuel;
    }
};

class four_wheeler : public vehicle
{
public:
    float distance, fuel;
    virtual float getMileage()
    {
        cout << "Enter the distance and fuel used : ";
        cin >> distance >> fuel;
        return distance / fuel;
    }
};

class scooter : public two_wheeler
{
public:
    float distance, petrol;
    virtual float getMileage()
    {
        cout << "Enter the distance and petrol used : ";
        cin >> distance >> petrol;
        return distance / petrol;
    }
};

class bicycle : public two_wheeler
{
public:
    float distance, battery;
    virtual float getMileage()
    {
        cout << "Enter the distance and battery consumed : ";
        cin >> distance >> battery;
        return distance / battery;
    }
};

class petrol : public four_wheeler
{
public:
    float distance, petrol;
    virtual float getMileage()
    {
        cout << "Enter the distance and petrol used : ";
        cin >> distance >> petrol;
        return distance / petrol;
    }
};

class diesel : public four_wheeler
{
public:
    float distance, diesel;
    virtual float getMileage()
    {
        cout << "Enter the distance and diesel used : ";
        cin >> distance >> diesel;
        return distance / diesel;
    }
};

int main()
{
    vehicle *v;
    cout << "Enter 1 to calculate mileage of scooter." << endl;
    cout << "Enter 2 to calculate mileage of bicycle." << endl;
    cout << "Enter 3 to calculate mileage of petrol car." << endl;
    cout << "Enter 4 to calculate mileage of diesel car." << endl;
    cout << "Enter your choice : ";
    int choice;
    cin >> choice;
    if (choice == 1)
        v = new scooter;
    else if (choice == 2)
        v = new bicycle;
    else if (choice == 3)
        v = new petrol;
    else if (choice == 4)
        v = new diesel;
    else
        cout << "Invalid choice!";
    float mileage = v->getMileage();
    cout << "Mileage : " << mileage;
    return 0;
}