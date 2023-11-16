/*5. Write a C++ program to take a number from user and check is it prime number or not.*/
/*5. Write a C++ program to take a number from user and check is it prime number or not.*/

#include <iostream>
#include <cmath>
using namespace std;
int isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    double limit = sqrt(n) + 1;

    for (int i = 2; i <= limit; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int x = isPrime(n);

    if (x == 0)
    {
        cout << "Not prime" << endl;
    }
    else
    {
        cout << "Prime" << endl;
    }

    return 0;
}

