//Practise program
#include<iostream>
using namespace std;
int main()
{
    int x=-1;
    cout <<"Before try"<<endl;
    try
    {
        cout<<"Inside Try"<<endl;
        if(x<0)
        {
            throw x;
            cout<<"after throw (Never Executed)"<<endl;
        }
    }
    catch(int a)
    {
        cout<<"Exception caught"<<endl;
        cout<<"After catch(Will be executed)"<<endl;
    }
    return 0;
}