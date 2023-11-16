#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    string empId;
    double salary;

public:
    void inputEmployeeDetails();
    void displaySalary();
};
void Employee::inputEmployeeDetails()
{
    cout << "__________Employee Details_________\n";
    cout << "Enter The Name:";
    cin >> name;
    cout << "Enter The employee Id:";
    cin >> empId;
    cout << "Enter The salary:";
    cin >> salary;
}

void Employee::displaySalary()
{
    cout << "Employee Salary: " << salary << endl;
}

int main()
{
    Employee emp;
    emp.inputEmployeeDetails();
    emp.displaySalary();

    return 0;
}
