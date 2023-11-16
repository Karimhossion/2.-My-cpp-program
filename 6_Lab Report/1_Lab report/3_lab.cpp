// 3. Write a C++ program to determine and print the sum of following harmonic series for given value
// of n: 1+1/2+1/3+…….+1/n (The value of n should be given interactively through the terminal)
#include <iostream>
using namespace std;
int main()
{
    double n, sum = 0;

    cout << "Enter the valu of n:";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input. Please enter a positive integer for n.";
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    cout << "The sum of harmonic seris for n= " << n << " is: " << sum << endl;
    return 0;
}
