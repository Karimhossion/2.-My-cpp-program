#include<iostream>
using namespace std;
class Base
{
    public:
        int a,b;
        void get_data()
        {
            cout<<"Enter the value of a and b : ";
            cin>>a>>b;
        }
};
class Derived1 : public Base
{
    public:
        void multiplication()
        {
            cout<<"Multiplication : "<<a*b<<endl;
        }
};
class Derived2 :public Base
{
    public:
        void sum()
        {
            cout<<"Sum : "<<a+b;
        }
};
int main()
{
    Derived1 d1;
    d1.get_data();
    d1.multiplication();
    
    Derived2 d2;
    d2.get_data();
    d2.sum();
    return 0;
}