//book: program:13.2--->Invoking Function That Generates Exception.
#include<iostream>
using namespace std;
void divide (int a,int b)
{
    if(b==0)
    {
        throw b;
    }
    else
    {
        double result=(double)a/b;
        cout<<"Result = "<<result<<endl;
    }
}
int main()
{
    int num1,num2;
    cout<<"Enter The Two Number: ";
    cin>>num1>>num2;
    try 
    {
        divide(num1,num2);//invoke divide
    }
    catch(int x)//Catches the Exception
    {
        cout<<"Divide By zero Exception";   
    }
    return 0;
}