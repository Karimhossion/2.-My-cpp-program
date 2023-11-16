/*2. Create a class Person with attributes like name and age. Create another class
Employee with attributes like employee ID and salary. Derive a class Manager from
both Person and Employee.*/

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void get_name(string);
    void get_age(int);
};

class Employee
{
protected:
    int employeeId;
    double salary;

public:
    void get_employeeId(int);
    void get_salary(double);
};

class Manager : public Person, public Employee
{
public:
    void display(void);
};

void Person::get_name(string n)
{
    name = n;
}

void Person::get_age(int a)
{
    age = a;
}

void Employee::get_employeeId(int e)
{
    employeeId = e;
}

void Employee::get_salary(double s)
{
    salary = s;
}

void Manager::display(void)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Employee ID: " << employeeId << endl;
    cout << "Salary: " << salary << endl;
}

int main()
{
    Manager person_employee;

    string name;
    int age;
    int employeeId;
    double salary;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter Employee ID: ";
    cin >> employeeId;
    cout << "Enter Employee salary: ";
    cin >> salary;

    person_employee.get_name(name);
    person_employee.get_age(age);
    person_employee.get_employeeId(employeeId);
    person_employee.get_salary(salary);

    cout << "___________Person and Employee Details______________: " << endl;
    person_employee.display();

    return 0;
}




/*
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
    void setValue(int empId, double slry)
    {
        employeeId = empId;
        salary = slry;
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
    void setValue(int empId, double slry, string name, int age)
    {
        Person::setValue(name, age);
        Employee::setValue(empId, slry);
    }
    void showInfo()
    {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Employee ID: " << getEmployeeId() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
};

int main()
{

    Manager m;
    m.setValue(1, 1000, "Bolbona", 25);
    m.showInfo();
    return 0;
}
*/