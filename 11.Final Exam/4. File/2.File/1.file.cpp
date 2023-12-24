#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("dext.txt");
    file<<"I am a arafat\n";
    file.close();
}