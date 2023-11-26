#include <iostream>
using namespace std;
class Person
{

private:
    string name;
    int age;

public:
    void setValue(string n, int a)
    {
        name = n;
        age = a;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};

class Employee
{
private:
    int employeeId;
    double salary;

public:
    void setValue(int e, double s)
    {
        employeeId = e;
        salary = s;
    }
    int getEmployeeId()
    {
        return employeeId;
    }
    double getSalary()
    {
        return salary;
    }
};

class Manager : public Person, public Employee
{

public:
    void setValue(int employeeId, double salary, string name, int age)
    {
        Person::setValue(name, age);
        Employee::setValue(employeeId, salary);
    }
    void showInfo()
    {
        cout << "_________________Person and Employee details__________:" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Employee ID: " << getEmployeeId() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
};

int main()
{
    Manager m;
    string name;
    int age;
    int employeeId;
    double salary;

    cout << "Enter The Name:";
    cin >> name;

    cout << "Enter The age:";
    cin >> age;

    cout << "Enter The Employee Id:";
    cin >> employeeId;

    cout << "Enter The Salary:";
    cin >> salary;

    m.setValue(employeeId, salary, name, age);
    m.showInfo();
    return 0;
}