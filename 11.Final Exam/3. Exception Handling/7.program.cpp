// Multiple Catch Statement
/*akti Exception throw korar jonno more then  one condition needed*/
#include <iostream>
using namespace std;

void test(int x)
{
    try{
        if(x>0)
        {
            throw x;
        }
        else 
        {
            throw 'x';
        }
    }
    catch(int no)
    {
        cout<<"Caught an integer : "<<no<<endl;
    }
    catch(char ch)
    {
        cout<<"Caught a Character : "<<ch<<endl;
    }
    cout<<"Next Statements"<<endl;
}
int main()
{
    cout<<"Multiple catch Statements:"<<endl;
    cout<<"x>0"<<endl;
    test(5);
    
    cout<<"x<0"<<endl;
    test(-5);
    
    return 0;
}
