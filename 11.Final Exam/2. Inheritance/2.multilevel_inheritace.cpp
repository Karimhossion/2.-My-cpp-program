#include<iostream>
using namespace std;
class Base
{
    public:
        int a;
    void get_data()
    {
        cout<<"Enter The value of a = ";
        cin>>a;
    }
};
class Derived1 : public Base
{
    public:
        int b;
    void read_data()
    {
        cout<<"Enter The value of b = ";
        cin>>b;
    }
};
class Derived2 : public Derived1
{
    private:
        int c;
    public:
        void in_data()
        {
            cout<<"Enter the value of c = ";
            cin>>c;
        }
        void put_data()
        {
            cout<<"The product : "<<a*b*c<<endl;
        }
};
int main()
{
    Derived2 d2;
    d2.get_data();
    d2.read_data();
    d2.in_data();
    d2.put_data();
    return 0;
}