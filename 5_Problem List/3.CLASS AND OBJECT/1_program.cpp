//1. Write a program that takes name, dept and id as input in a function and display its output using a class.

#include<iostream>
using namespace std;
class Student
{
private:
    string name;
    string dept;
    int id;
public:
    void inputDetails();
    void displayDetails();
};
void Student::inputDetails() 
{
    cout<<"Enter The Name:";
    cin>>name;
    cout<<"Enter The Department:";
    cin>>dept;
    cout<<"Enter The Id:";
    cin>>id;
}
void Student::displayDetails()
{
    cout<<"______________________Students Details_____________________:"<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Department :"<<dept<<endl;
    cout<<"Id :"<<id<<endl;

}

int main()
{
    Student obj;
    obj.inputDetails();
    obj.displayDetails();
    return 0;
}