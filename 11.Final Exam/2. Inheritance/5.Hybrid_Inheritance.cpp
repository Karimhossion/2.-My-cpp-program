#include<iostream>
using namespace std;
class A 
{
    public:
        int x;
};
class B : public A
{
    public:
        void get_data()
        {
            cout<<"Enter the value of x : ";
            cin>>x;
        }
};
class C 
{
    public:
    int y;
    void read_data()
    {
        cout<<"Enter the value of y : ";
        cin>>y;
    }
};
class D : public B, public C
{
    public:
        void sum()
        {
            cout<<"The sum : "<<x+y<<endl;
        }
};
int main()
{
    D d;
    d.get_data();
    d.read_data();
    d.sum();
}
