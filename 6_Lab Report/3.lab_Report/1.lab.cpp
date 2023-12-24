/*1. Write a program that takes name, dept and id as input in a function and display its output using a class.*/
#include <iostream>
using namespace std;
class Student 
{
    private:
        string name;
        string dept;
        int id;
    public:
        Student(string n, string d,int i)
        {
            name=n;
            dept=d;
            id=i;
        }
        void displayInfo()
        {
            cout<<"Name :"<<name<<endl;
            cout<<"Department : "<<dept<<endl;
            cout<<"Id :" <<id<<endl;
        }
};
int main()
{
    string name, dept;
    int id;

    cout<<"Enter the Name : ";
    cin>>name;
    cout<<"Enter the Department : ";
    cin>>dept;
    cout<<"Enter the Id : ";
    cin>>id;

    Student s(name,dept,id);
    s.displayInfo();
    return 0;
}
