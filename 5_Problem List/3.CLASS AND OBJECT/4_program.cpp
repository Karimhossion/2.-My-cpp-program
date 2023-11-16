#include<iostream>
using namespace std;
class Largest
{
    private:
        double number1;
        double number2;
    public:
        void getData();
        void putData();
};
void Largest::getData()
{
    cout << "Enter The Number1: ";
    cin >> number1;
    cout << "Enter The Number2: ";
    cin >> number2;
}
void Largest::putData()
{
    if (number1 > number2)
    {
        cout << "The Largest Number is: " << number1 << endl;
    }
    else
    {
        cout << "The Largest Number is: " << number2 << endl;
    }
}
int main()
{
    Largest obj;
    obj.getData();
    obj.putData();
    return 0;
}
