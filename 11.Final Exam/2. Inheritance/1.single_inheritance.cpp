#include<iostream>
using namespace std;
class Base
{
    public:
        int a;
    void get_data()
    {
        cout<<"Enter the value a = ";
        cin>>a;
    }
};
class Derived : public Base
{
    private:
        int b;
    public:
        void read_data()
        {
            cout<<"Enter the Value b = ";
            cin>>b;
        }
        void put_data()
        {
            cout<<"The product : "<<a*b<<endl;
        }
};
int main()
{
    Derived d;
    d.get_data();
    d.read_data();
    d.put_data();
    return 0;
}






























/*//single inheritance 
#include<iostream>
using namespace std;
class Base
{
    private:
        int a;
    public:
        int b;
        void set_ab()
        {
            cout<<"Enter The Valu a and b: ";
            cin>>a>>b;
        }
        int get_a()
        {
            return a;
        }
        void show_a()
        {
            cout<<"a : "<<a<<endl;
        }
};
class Derived : public Base
{
    int c;
    public:
        void mul()
        {
            set_ab();
            c=b*get_a();
        }
        void display()
        {
            show_a();
            cout<<"b : "<<b<<endl;
            cout<<"c : "<<c<<endl;
        }
};
int main()
{
    Derived d;
    d.mul();
    d.display();
    d.mul();
    d.display();
    return 0;
}*/