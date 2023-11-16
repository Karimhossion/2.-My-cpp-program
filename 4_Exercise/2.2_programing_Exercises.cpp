/*Write a program to read two numbers from the keyboard and display the larger value on the screen.*/
#include<iostream>
using namespace std;
int main()
{
    double number1,number2;
    cout<<"Enter the first number:";
    cin>>number1;
    cout<<"Enter the second number:";
    cin>>number2;

    if(number1>number2)
    {
        cout<<"The Number Larger"<<endl;
    }
    else if(number2>number1)
    {
        cout<<"The Number Larger"<<endl;
    }
    else
    {
        cout<<"Both Number is Equal"<<endl;
    }
    return 0;
}