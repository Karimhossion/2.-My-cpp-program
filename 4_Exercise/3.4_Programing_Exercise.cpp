/*3.4 Write a program to evaluate the following investment equation
    V= P(1+n)n
and print the tables which would give the value of V for various combination of the following values of
    P,r and n:
P: 1000, 2000, 3000..........10,000
r: 0.10, 0.11, 0.12......0.20
n: 1,2,3......10

Hint: P is the principal amount and-V is the value of money at the end of n years. This equation can be
recursively writter as
V= P(1+r)
P=V
In other words, the value of money at the end of the first year becomes the principal amount for the next year, and so on
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const int size = 10;
    float p[size] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    float r[size] = {0.10, 0.11, 0.12, 0.13, 0.14, 0.15, 0.16, 0.17, 0.18, 0.19};

    cout <<left<<setw(5)<<"n=1";

    for (int i = 2; i <= size; i++) {
        cout <<setw(9)<< "n-" << i;
    }
    
    cout << "\n";

    for (int i = 0; i < size; i++) {
        float pf = p[i];
        cout <<setw(6) << "p-" << (i + 1);
        
        for (int j = 0; j < size; j++) {
            float v = pf * (1 + r[j]);
            cout <<fixed <<setprecision(2) <<setw(10) << v;
            pf = v;
        }
        cout << "\n";
    }

    return 0;
}
