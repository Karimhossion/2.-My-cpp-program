/**/
#include<iostream>
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
