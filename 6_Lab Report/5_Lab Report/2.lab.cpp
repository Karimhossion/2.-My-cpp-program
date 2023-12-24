/*Design a base class Employee with attributes name and salary.Derive classes Manager
and Developer inheriting from Employee. Display the details of each employee.*/
#include<iostream>
#include<string>
using namespace std;
class Employee
{
    protected:
        string name;
        double salary;
    public:
        Employee(string n, double  s)
        {
            name=n;
            salary=s;
        }
        virtual void display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Salary : "<<salary<<endl;
        }
};
class Manager : public Employee
{
    private:
        string department;
    public:
        Manager (string n, string d, double s):Employee(n,s)
        {
            department=d;
        }
        void display()
        {
            Employee::display();
            cout << "Department : " <<department<< endl;
        }
};
class Developer : public Employee
{
    private:
        string language;
    public:
        Developer(string n, string l, double s): Employee(n,s)
        {
            language=l;
        }
        void display()
        {
            Employee::display();
            cout << "Language : " << language << endl;
        }
};
int main()
{
    string manName, manDepartment;
    double manSalary;
    cout<<"Manager Details : "<<endl;
    cout<<"Name : ";
    cin>>manName;
    cout<<"Department : ";
    cin>>manDepartment;
    cout<<"Salary : ";
    cin>>manSalary;

    string devName, devLanguage;
    double devSalary;
    cout<<"Developer Details : "<<endl;
    cout<<"Name : ";
    cin>>devName;
    cout<<"Language : ";
    cin>>devLanguage;
    cout<<"Salary : ";
    cin>>devSalary;

    Manager m(manName,manDepartment,manSalary);
    Developer d(devName,devLanguage,devSalary);

    m.display();
    d.display();
    return 0;
}