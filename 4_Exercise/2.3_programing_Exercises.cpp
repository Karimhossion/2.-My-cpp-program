/*Write a program that inputs a character from keyboard and displays its corresponding ASCII value of the screen.*/
#include<iostream>
using namespace std;
int main()
{
    char charecter;
    cout<<"Enter the Charecter:";
    cin>>charecter;
    cout<<"The ASCII value "<<charecter<<" is: "<<int(charecter)<<endl;
    return 0;
}