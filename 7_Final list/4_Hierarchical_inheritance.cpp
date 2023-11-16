#include<iostream>
using namespace std;
class A
{
    public:
        void show_A()
        {
            cout<<"class A"<<endl;
        }
};
class B: public A
{
    public:
        void show_B()
        {
            cout<<"class B"<<endl;
        }
};
class C : public A
{
    public:
        void show_C()
        {
            cout<<"class C"<<endl;
        }
};
int main()
{
    B obj1;
    cout<<"Calling from B:"<<endl;
    obj1.show_B();
    obj1.show_A();

    C obj2;
    obj2.show_C();
    obj2.show_A();
    return 0;

}