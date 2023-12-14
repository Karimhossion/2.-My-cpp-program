#include<iostream>
using namespace std;
class Overload
{
    public:
        void add(int a, int b)
        {
            cout<<a+b<<endl;
        }
        void add(int a, int b, int c)
        {
            cout<<a+b+c<<endl;
        }
        void add()
        {
            cout<<"Nothing to add"<<endl;
        }
};
int main()
{
    Overload obj;

    // Calling the add function with two parameters
    cout << "Adding two numbers: ";
    obj.add(10, 20);

    // Calling the add function with three parameters
    cout << "Adding three numbers: ";
    obj.add(10, 20, 30);

    // Calling the add function with no parameters
    cout << "Adding nothing: ";
    obj.add();
    return 0;
}