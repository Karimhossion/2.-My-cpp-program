/*1. Define a class Calculator with a function sum_numbers that takes two numbers that takes two parameters and returns their sum, Implement function overloading  for the 
sum_numbers function to handle cases where either two or three numbers are provided and return their sum.*/

#include<iostream>
using namespace std;
class Calculator
{
    public:
        double sum_numbers(double x, double y)
        {
            return x+y;
        }
        double sum_numbers(double x, double y, double z)
        {
            return x+y+z;
        }
};
int main()
{
    double num1,num2,num3;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    Calculator c;
    cout<<"The sum of two number : "<<c.sum_numbers(num1,num2)<<endl;

    cout<<"Enter the third number : ";
    cin>>num3;

    cout<<"The sum of three number : "<<c.sum_numbers(num1,num2,num3)<<endl;

    return 0;
}