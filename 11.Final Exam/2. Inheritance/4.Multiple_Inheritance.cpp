#include<iostream>
using namespace std;
class A 
{
    public:
        int x;
        void get_data()
        {
            cout<<"Enter the value of x : ";
            cin>>x;
        }
};
class B 
{
    public:
        int y;
        void read_data()
        {
            cout<<"Enter the value of y : ";
            cin>>y;
        }
};
class C : public A, public B
{
    public:
    void sum()
    {
        cout<<"The Sum : "<<x+y<<endl;
    }
    void multiplication()
    {
        cout<<"The Multiplication : "<<x*y<<endl;
    }
};
int main()
{
    C obj1;
    obj1.get_data();
    obj1.read_data();
    obj1.sum();
    obj1.multiplication();
    return 0;
}