/*Write a C++ program that will ask for a temperature in Fahrenheit and display it in Celsius.*/
#include<iostream>
using namespace std;
int main()
{
    double fahrenheit, celsius;
    cout<<"Enter the Fahrenheit:";
    cin>>fahrenheit;

    celsius=(fahrenheit-32)*5/9;

    cout<<"Celsius:"<<celsius<<endl;
    return 0;
}