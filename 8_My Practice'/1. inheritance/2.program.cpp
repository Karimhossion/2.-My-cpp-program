/*Create a class Person with attributes like name and age. Create another class
Employee with attributes like employee ID and salary. Derive a class Manager from
both Person and Employee*/
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
    string getname()
    {
        return name;
    }
    int getage()
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
    int getemployeeId()
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
    Manager(string n, int a, int e, double s)
    {
        Person::setValue(n, a);
        Employee::setValue(e, s);
    }
    void displayInfo()
    {
        cout<<"______________Output Details_______________:"<<endl;
        cout<<"Name        : "<<getname()<<endl;
        cout<<"Age         : "<<getage()<<endl;
        cout<<"Employee Id : "<<getemployeeId()<<endl;
        cout<<"Employee Salary: "<<getSalary()<<endl;
    }
};
int main()
{
    string name;
    int age;
    int employeeId;
    double salary;

    cout<<"___________________Input Details_____________:"<<endl;
    cout<<"Enter The Name: ";
    cin>>name;
    cout<<"Enter The Age:";
    cin>>age;
    cout<<"Enter The Employee Id: ";
    cin>>employeeId;
    cout<<"Enter The salary:";
    cin>>salary;

    Manager m(name,age,employeeId,salary);
    m.displayInfo();
    return 0;


}