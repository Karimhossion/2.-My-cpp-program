/*4. Write a program that takes name, dept and id as input in a function, takes marks of three subjects and calculate
the average of the marks in another function where the marks will be passed as arguments and display their
output*/
#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:
        string name;
        string dept;
        int id;
        double average;
    public:
        void inputDetails();
        void calculateAverage(double mark1, double mark2, double mark3);
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
void Student::calculateAverage(double mark1, double mark2, double mark3)
{
    average=(mark1+mark2+mark3)/3;
}
void Student::displayDetails()
{
    cout<<"___________Students  Details___________________:"<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Department :"<<dept<<endl;
    cout<<"Id :"<<id<<endl;
    cout<<"Average Marks:"<<average<<endl;
}
int main()
{
    Student obj;
    obj.inputDetails();

    double mark1, mark2, mark3;
    cout << "Enter the Three Subject Marks:" << endl;
    cout << "Subject 1: ";
    cin >> mark1;
    cout << "Subject 2: ";
    cin >> mark2;
    cout << "Subject 3: ";
    cin >> mark3;


    obj.calculateAverage(mark1,mark2 ,mark3);
    obj.displayDetails();

    return 0;
}