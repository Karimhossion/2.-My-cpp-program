#include<iostream>
using namespace std;
class B
{
        int a;
    public:
        int b;
        void get_ab()
        {
            cout<<"Enter the value of a:";
            cin>>a;
            cout<<"Enter The value of b:";
            cin>>b;
        }
        int get_a()
        {
            return a;
        }
        void show_a()
        {
            cout<<"a = "<<a<<endl;
        }
};
class D : private B
{
        int c;
    public:
        void mul()
        {
            get_ab();
            c=b*get_a();
        }
        void display()
        {
            show_a();
            cout<<"b = "<<b<<endl;
            cout<<"c = "<<c<<endl;
        }

};
int main()
{
    D obj;
    obj.mul();
    obj.display();
    obj.mul();
    obj.display();
    return 0;
}