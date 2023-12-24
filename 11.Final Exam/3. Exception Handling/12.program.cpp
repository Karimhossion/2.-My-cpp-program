#include<iostream>
using namespace std;
void test (int x)
{
    try 
    {
        if(x==1) throw x;
        else
            if(x==-1) throw 'x';
        else
            if(x==0) throw 1.0;
    }
    catch(int a)
    {
        cout<<"The Type Integer"<<endl;
    }
    catch(char c)
    {
        cout<<"The Type Character"<<endl;
    }
    catch(double d)
    {
        cout<<"The Type of Double"<<endl;
    }
}
int main()
{
    cout<<"Testing Multiple Caught"<<endl;
    cout<<"(x==1): ";
    test(1);
    cout<<"(x==-1): ";
    test(-1);
    cout<<"(x==0): ";
    test(0);
    return 0;
}