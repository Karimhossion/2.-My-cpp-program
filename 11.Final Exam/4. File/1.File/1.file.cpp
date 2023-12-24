#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;

    ofstream file;

    file.open("student.txt");

    cout<<"Enter your name : ";
    getline(cin,name);
    file<<name<<endl;


    file.close();
    cout<<"Data is stored"<<endl;
    return 0;
}
