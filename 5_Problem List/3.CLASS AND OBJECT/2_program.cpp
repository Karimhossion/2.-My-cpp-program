/* 3. Write a program that takes name, dept and id as input in a function, takes marks of three subjects and calculate
the average of the marks in another function and display the output using a class.*/

#include<iostream>
using namespace std;
class Student
{
    private:
        string name;
        string dept;
        int id;
        double marks[3];
        double average;
    public:
        void inputDetails();
        void inputMarks();
        void calculateAverage();
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
void Student::inputMarks()
{
    cout<<"_______________Enter The Three Subject Marks__________:"<<endl;
    for (int i = 0; i<3; i++)
    {
        cout<<"Subject "<<i+1<<": ";
        cin>>marks[i];
    }
    
}
void Student::calculateAverage()
{
    double sum=0;
    for (int i = 0; i < 3; i++)
    {
        sum+=marks[i];
    }
    average=sum/3;   
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
    obj.inputMarks();
    obj.calculateAverage();
    obj.displayDetails();
    return 0;
}