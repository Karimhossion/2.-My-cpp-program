/*1. Write a program that takes two numbers as input and show the largest number as output using constructor
function where the numbers will be passed as arguments to the constructor.*/

#include<iostream>
using namespace std;
class Largest
{
    private:
        double number1;
        double number2;
    public:
        Largest (double n1, double n2)
        {
            number1=n1;
            number2=n2;
        }
    void putData()
{
    if (number1>number2)
    {
        cout<<"The Largest Number: "<<number1<<endl;
    }
    else
    {
        cout<<"The Largest Number:"<<number2<<endl;
    }
}
};

int main()
{
    double number1, number2;

    cout<<"Enter The Number1:";
    cin>>number1;
    cout<<"Enter The Number2:";
    cin>>number2;
    Largest obj(number1, number2);
    obj.putData();
    return 0;
}