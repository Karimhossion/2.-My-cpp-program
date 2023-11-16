/*In C++, The scope resolution operator is :: .It is used for the following purpose.*/
#include<iostream>
using namespace std;
int x=10; //GLoabal variable
int main()
{
    int x=50;//Local Variable
    ::x=20;
    cout<<::x<<endl;
    return 0;

}