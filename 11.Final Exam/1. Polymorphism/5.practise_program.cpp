//virtual functions
#include<iostream>
using namespace std;
class Base
{   
    public:
    virtual void display()
    {
        cout<<"Display Base"<<endl;
    }
    void show()
    {
        cout<<"Show Base"<<endl;
    }
};
class Derived : public Base
{
    public:
        void display()
        {
            cout<<"Display Derived"<<endl;
        }
        void show()
        {
            cout<<"Show Derived";
        }
};
int main()
{
    Base b;
    Derived d;
    Base *p;

    p=&b;
    p->display();
    p=&d;
    p->show();
    return 0;
}