/*1. Write a program that takes two numbers as input and show the largest number as output using constructor
function where the numbers will be passed as arguments to the parameters.*/
#include<iostream>
using namespace std;
class LargestNumber
{
    private:
        double num1, num2;
    public:
        LargestNumber(double n1, double n2)         // Constructor with parameters
        {
            num1=n1;
            num2=n2;
        }
        double showLargest()
        {
            if (num1>num2)
            {
                return num1;
            }
            else
            {
                return num2;
            }
        }
};
int main()
{
    double num1,num2;
    cout<<"Enter the Two Number : ";
    cin>>num1>>num2;

    LargestNumber obj(num1,num2);
    cout<<"The Largest Number : "<<obj.showLargest()<<endl;
    return 0;
}