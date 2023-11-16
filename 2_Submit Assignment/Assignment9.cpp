/*9. Write a C++ program to implement a class called Student that has private member variables for
name, class, roll number, and marks. Include member functions to calculate the grade based on
the marks and display the student's information.*/

#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    string rollnumber;
    float marks;

public:
    void inputStudentData();
    void calculateGrade();
    void displayStudentInfo();
};

void Student::inputStudentData()
{
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Roll Number: ";
    cin >> rollnumber;
    cout << "Enter Marks: ";
    cin >> marks;
}

void Student::calculateGrade()
{
    char grade;

    if (marks >= 80)
        grade = 'A';
    else if (marks >= 70)
        grade = 'B';
    else if (marks >= 60)
        grade = 'C';
    else if (marks >= 50)
        grade = 'D';
    else if (marks >= 40)
        grade = 'E';
    else
        grade = 'F';

    cout << "Grade: " << grade << endl;
}

void Student::displayStudentInfo()
{
    cout << "_____________________Student Information:___________________" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollnumber << endl;
    cout << "Marks: " << marks << endl;
}

int main()
{
    Student x;

    x.inputStudentData();
    x.calculateGrade();
    x.displayStudentInfo();

    return 0;
}
