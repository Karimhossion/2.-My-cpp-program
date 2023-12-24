// 3. Write a program that takes name, dept and id as input in a function, takes marks of three subjects and calculate the average of the marks in another function and display their output using loop for three students./
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    string dept;
    int id;
    int marks[3];
    void inputMarks()
    {
        cout << "Enter Three subject Marks : ";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }

public:
    void loadInput()
    {
        cout << "Enter the Name : ";
        cin >> name;
        cout << "Enter the Department : ";
        cin >> dept;
        cout << "Enter the Id : ";
        cin >> id;
        inputMarks();
    }

    double calAverage()
    {
        double sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }
        return sum / 3.0;
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

    Student s[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Details of Student " << i + 1 << endl;
       // cout << "-----------------------" << endl;
        s[i].loadInput();
    }
   // cout << "===========================" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Details of Student " << i + 1 << endl;
        //cout << "-----------------------" << endl;
        s[i].displayInfo();
    }
    return 0;
}