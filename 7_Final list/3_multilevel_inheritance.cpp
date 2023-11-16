#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll_number;

    public:
        void get_number(int a)
        {
            roll_number = a;
        }

        void put_number()
        {
            cout << "Roll Number: " << roll_number << endl;
        }
};

class test : public Student
{
    protected:
        float subject1;
        float subject2;

    public:
        void get_marks(float x, float y)
        {
            subject1 = x;
            subject2 = y;
        }

        void put_marks()
        {
            cout << "Marks in Subject 1: " << subject1 << endl;
            cout << "Marks in Subject 2: " << subject2 << endl;
        }
};

class result : public test
{
    float total;

    public:
        void display()
        {
            total = subject1 + subject2;
            put_number();
            put_marks();
            cout << "Total = " << total << endl;
        }
};

int main()
{
    result obj;

    int roll;
    float marks1, marks2;

    cout << "Enter Roll Number: ";
    cin >> roll;
    
    cout << "Enter Marks in Subject 1: ";
    cin >> marks1;

    cout << "Enter Marks in Subject 2: ";
    cin >> marks2;

    obj.get_number(roll);
    obj.get_marks(marks1, marks2);
    obj.display();

    return 0;
}
