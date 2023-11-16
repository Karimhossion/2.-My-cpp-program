/*4. Write a C++ program to create a class called Car that has private member variables for company,
model, and year. Implement member functions to get and set these variables.*/

#include <iostream>
using namespace std;
class Car
{
private:
    string company;
    string model;
    int year;

public:
    void getdata();
    void putdata();
};

void Car::getdata()
{
    cout << "Enter Company Name: ";
    cin >> company;

    cout << "Enter Model: ";
    cin >> model;

    cout << "Enter Year: ";
    cin >> year;
}

void Car::putdata()
{
    cout << "________________Car Details:______________" << endl;
    cout << "Company: " << company << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
}

int main()
{
    Car x;
    x.getdata();
    x.putdata();

    return 0;
}
