// write a program that has three overloaded functions / overloading functions.

#include <iostream>
using namespace std;

float sum(float a, float b)
{
    return a + b;
}
static float sum(float a, float b, float c)
{
    return a + b + c;
}

static float sum(float a[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{

    cout << "3 + 5 = " << sum(3, 5) << endl;
    cout << "4 + 4 + 10 = " << sum(4, 4, 10) << endl;
    float a[10] = {11.5, 7.2, 3.443, 41.5, 51.3, 61.3, 17.3, 18.61, 11.219, 15.110};
    cout << "Array sum = " << sum(a, 10) << endl;
    return 0;
}
