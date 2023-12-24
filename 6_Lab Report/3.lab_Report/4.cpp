#include <iostream>
using namespace std;
class AverageMarks
{
    string name,dept,id;
    int cse, che, dm;
    double average;

public:
    void getData()
    {
        cout << "Enter Name : ";
        cin>>name;
        cout << "Enter Depertment : ";
        cin >> dept;
        cout << "Enter Id : ";
        cin >> id;
    }
    void averageMarks(int cs, int ch, int d)
    {
        cse = cs;
        che = ch;
        dm= d;
        cin.ignore();
        average = (cse + che + dm) / 3.0;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Depertment : " << dept << endl;
        cout << "Id : " << id << endl;
        cout << "Average Marks: " << average << endl;
    }
};
int main()
{
    AverageMarks info[3];
    int cse, che, dm;
    for (int i = 0; i < 3; i++)
    {
        info[i].getData();
        cout << "Enter marks of CSE: ";
        cin >> cse;
        cout << "Enter marks of CHE: ";
        cin >> che;
        cout << "Enter marks of DM: ";
        cin >> dm;
        info[i].averageMarks(cse, che, dm);
    }
    cout <<"Result : "<<endl;
    for (int i = 0; i < 3; i++)
    {
        info[i].display();
    }
    return 0;
}