#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    string country;
    int age;

public:
    void inputDetails();
    void displayDetails();
};

void Person::inputDetails()
{
    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Country: ";
    cin >> country;
}

void Person::displayDetails()
{
    cout << "________________Person Details:___________________" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Country: " << country << endl;
}

int main()
{
    Person person;

    person.inputDetails();
    person.displayDetails();

    return 0;
}
