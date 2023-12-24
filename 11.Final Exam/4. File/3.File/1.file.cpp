#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;
    ofstream file;
    file.open("artist.txt");
    cout<<"Enter The information :";
    getline(cin,name);
    file<<name<<endl;
    file.close();
    return 0;
}