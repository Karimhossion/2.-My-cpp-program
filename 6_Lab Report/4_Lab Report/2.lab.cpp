/* Write a program that takes three numbers as input and show the largest number as output using constructor
function where the numbers will be passed as arguments to the parameters.*/
#include<iostream>
using namespace std;

class LargestNumber
{
private:
    double num1, num2, num3;

public:
    LargestNumber(double n1, double n2, double n3) // Constructor with parameters
    {
        num1 = n1;
        num2 = n2;
        num3 = n3;
    }

    double showLargest()
    {
        if (num1 >= num2 && num1 >= num3)
        {
            return num1;
        }
        else if (num2 >= num1 && num2 >= num3)
        {
            return num2;
        }
        else
        {
            return num3;
        }
    }
};

int main()
{
    double num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    LargestNumber obj(num1, num2, num3);
    cout << "The Largest Number: " << obj.showLargest() << endl;
    return 0;
}
