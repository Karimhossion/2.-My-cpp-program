// 4. Write a C++ program to find out factorial value of given number.

#include <iostream>
using namespace std;
int main()
{
    int number;
    long long int factorial = 1;

    cout << "Enter The Positive Number: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Error! factorial is not defined";
    }
    else
    {
        for (int i = 2; i <= number; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial of : " << number << "=" << factorial;
    }
    return 0;
}