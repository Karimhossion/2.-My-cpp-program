#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    string rollNumber;
    float marks;

public:
    void inputStudentDetails();
    void calculateGrade();
    void displayStudentInfo();
};

void Student::inputStudentDetails()
{
    cout << "Enter Student's Name: ";
    cin >> name;
    cout << "Enter Roll Number: ";
    cin >> rollNumber;
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
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Marks: " << marks << endl;
}

int main()
{
    Student student;

    student.inputStudentDetails();
    student.calculateGrade();
    student.displayStudentInfo();

    return 0;
}
