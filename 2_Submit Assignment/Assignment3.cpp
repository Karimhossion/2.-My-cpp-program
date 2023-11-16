/*3. Write a C++ program to create a class called Person that has private member variables for name,
age and country. Implement member functions to set and get the values of these variables*/

#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    string country;
    int age;

public:
    void getdata();
    void putdata();
};

void Person::getdata()
{
    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Country: ";
    cin >> country;
}

void Person::putdata()
{
    cout << "________________Person Details:___________________" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Country: " << country << endl;
}

int main()
{
    Person x;

    x.getdata();
    x.putdata();

    return 0;
}
