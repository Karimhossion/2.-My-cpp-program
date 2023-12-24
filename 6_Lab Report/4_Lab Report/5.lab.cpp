/*5. Write a program with static member variable and static member function.*/
#include <iostream>
using namespace std;

class Myclass
{
public:
    static double ratio;
    static void printOrigin()
    {
        cout << "(0,0)" << endl;
    }
};
double Myclass::ratio = 3.33333;
int main()
{

    Myclass::printOrigin();
    cout << "The ratio :" << Myclass::ratio << endl;
    return 0;
}
