//practise program

#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 'a';
    }
    catch(int x)
    {
        cout<<"Caught"<<x;
    }
    catch(...)
    {
        cout<<"Default Exception"<<endl;
    }
    return 0;
}