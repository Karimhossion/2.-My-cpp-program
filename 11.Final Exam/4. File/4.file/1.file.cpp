#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;
    ifstream file("dxt.txt");
    while (getline(file,name))
    {
        cout<<name<<endl;
    }
    file.close();

    return 0;
    
}