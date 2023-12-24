/*2. Write a program that takes name, dept and id as input in a function, takes marks of three subjects and calculate the average of the marks in another function and display the output using a class.*/
#include<iostream>
using namespace std;
class Student
{
    private:
        string name;
        string dept;
        int id;
        int marks[3];
    public:
        Student(string n,string d,int i)
        {
            name=n;
            dept=d;
            id=i;
        }
        void getMarks()
        {
            cout<<"Enter Three subject Marks : ";
            cin>>marks[0]>>marks[1]>>marks[2];
        }
        double calAverage()
        {
            double result=marks[0]+marks[1]+marks[2];
            double average=(result/3);
            return average;
        }
        void displayInfo()
        {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "ID: " << id << endl;
        cout << "Average Marks: " << calAverage() << endl;
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
    s.getMarks();
    s.calAverage();
    s.displayInfo();
    return 0;
}