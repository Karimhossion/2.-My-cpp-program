//unary operator overloading
#include<iostream>
using namespace std;
class Test
{
    private:
        int num;
    public:
        Test()
        {
            num=8;
        }
        void operator *()
        {
            num=num*2;
        }
        void print()
        {
            cout<<"The Count is: "<<num;
        }
};
int main()
{
    Test t;
    *t;//calling of a function "void operator *()"
    t.print();
    return 0;
}