#include <iostream>
using namespace std;

class Car
{
private:
    string company;
    string model;
    int year;

public:
    void inputCarDetails();
    void displayCarDetails();
};

void Car::inputCarDetails()
{
    cout << "Enter Company Name: ";
    cin >> company;

    cout << "Enter Model: ";
    cin >> model;

    cout << "Enter Year: ";
    cin >> year;
}

void Car::displayCarDetails()
{
    cout << "________________Car Details:______________" << endl;
    cout << "Company: " << company << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
}

int main()
{
    Car car;
    car.inputCarDetails();
    car.displayCarDetails();

    return 0;
}
