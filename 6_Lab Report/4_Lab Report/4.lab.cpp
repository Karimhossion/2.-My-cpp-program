/*4. Write a program with four types of functions (return type and argument , return type but no argument , no 
return type but argument, no return type and no argument) */

#include <iostream>
using namespace std;

int square(int a)
{
    return a * a;
}
string getName()
{
    return "karim";
}
void printSum(int a, int b, int c)
{
    cout << "sum is : " << a << "+" << b << "+" << c << " = ";
    cout << a + b + c << endl;
}
void putData()
{
    cout << "_________________________" << endl;
}
int main()
{

    cout << "4 Square  = " << square(4) << endl;
    string str = getName();
    putData();
    cout << str << endl;
    printSum(4, 4, 10);
    return 0;
}





















/*#include<iostream>
using namespace std;

class LargestNumber
{
private:
    double num1, num2, num3;

    // Private function to find and return the largest of the three numbers
    double showNumber()
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

public:
    // Public constructor that takes three numbers as input
    LargestNumber(double n1, double n2, double n3)
    {
        // Assign the input numbers to the private variables
        num1 = n1;
        num2 = n2;
        num3 = n3;

        // Call the private function showNumber() and display the result
        cout << "The Largest Number: " << showNumber() << endl;
    }
};

int main()
{
    double num1, num2, num3;

    // Input three numbers from the user
    cout << "Enter the Three Numbers: ";
    cin >> num1 >> num2 >> num3;

    // Create an object of the LargestNumber class with the input numbers
    LargestNumber obj(num1, num2, num3);

    // The program ends after displaying the result
    return 0;
}
*/