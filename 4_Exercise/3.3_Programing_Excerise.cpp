/*3.3 Write a program to print the foliowing output using for loops.
    22
    333
    4444
    5555
*/
#include <iostream>
using namespace std;
int main()
{
    int rows = 4; // Number of rows in the pattern

    for (int i=2;i<=rows+1;i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<" "<< i;
        }
        cout<<endl;
    }

    return 0;
}
