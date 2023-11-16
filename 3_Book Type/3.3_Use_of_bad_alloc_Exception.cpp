/*
// Book Code:
#include<iostream>
#include<new>
#include<conio.h>
using namespace std;
class sample{
    private:
        int data1;
        char data2;
    public:
        void set(int i, char c)
        {
            data1=i;
            data2=c;
        }
        void display(void)
        {
            cout<<"Data1:"<<data1<<endl;
            cout<<"Data2:"<<data2<<endl;
        }
};
int main()
{
    sample *s_ptr;
    try
    {
        s_ptr=new sample;
    }
    catch(bad_alloc ba)
    {
        cout<<"Badv Allocation occurred...the program willm terminate now....";
        return 1;
    }
    s_ptr->set(25,'A');
    s_ptr->display();
    delete s_ptr;
    getch();
}*/
/*
// vedio anisul code:
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    while (1)
    {
        try
        {
            int num1, num2;

            cout << "Enter the 1st Number:";
            cin >> num1;
            cout << "Enter the 2nd number:";
            cin >> num2;

            if (num2 == 0)
            {
                throw -1;
            }

            double result = (double)num1 / num2;
            cout << "Result:" << result << endl;
        }
        catch (int x)
        {
            cout << "Devided By zero is not possioble." << endl;
            cout << "Please Try Again." << endl;
        }
    }

    getch();
}
*/

// CPP code for bad_alloc 
#include <iostream> 
#include <new> 
using namespace std;
// Driver code 
int main () { 
try
{ 
	int* gfg_array = new int[100000000]; 
} 
catch (std::bad_alloc & ba) 
{ 
	std::cerr << "bad_alloc caught: " << ba.what(); 
} 
return 0; 
}