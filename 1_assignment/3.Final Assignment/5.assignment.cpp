/*Create a class Calculator with overloaded add functions. Implement add functions to add two
integers, two floats, and two strings. Demonstrate the use of these overloaded functions in a
program.*/
#include<iostream>
#include<string>
using namespace std;
class Calculator
{
    public:
        int add(int num1, int num2)
        {
            return num1+num2;
        }
        float add(float num1, float num2)
        {
            return num1+num2;
        }
        string add(string num1, string num2)
        {
            return num1+num2;
        }
};
int main()
{
    Calculator c;

    int intnum1, intnum2;
    cin>>intnum1>>intnum2;
    int intResult = c.add(intnum1,intnum2);
    cout<<"The Integer Number : "<<intResult<<endl;

    float flnum1, flnum2;
    cin>>flnum1>>flnum2;
    float flResult = c.add(flnum1,flnum2);
    cout<<"The Floats Number : "<<flResult<<endl;

    string stnum1,stnum2;
    cin>>stnum1>>stnum2;
    string stResult= c.add(stnum1,stnum2);    
    cout<<"The Srings Number : "<<stResult<<endl;
    return 0;
}