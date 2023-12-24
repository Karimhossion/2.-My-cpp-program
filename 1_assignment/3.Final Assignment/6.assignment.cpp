/*Create a class named Test containing two private member variables, using the concept of
operator overloading make addition, subtraction, multiplication and division of the objects of
the test class*/
#include <iostream>
using namespace std;
class Test
{
private:
    double num1, num2;

public:
    Test(double a, double b)
    {
        num1 = a;
        num2 = b;
    }
    Test operator+(Test obj)
    {
        double n1 = num1 + obj.num1, n2 = num2 + obj.num2;
        Test tx(n1, n2);
        return tx;
    }
    Test operator-(Test obj)
    {
        double n1 = num1 - obj.num1, n2 = num2 - obj.num2;
        Test tx(n1, n2);
        return tx;
    }
    Test operator*(Test obj)
    {
        double n1 = num1 * obj.num1, n2 = num2 * obj.num2;
        Test tx(n1, n2);
        return tx;
    }
    Test operator/(Test obj)
    {
        if (obj.num2 == 0 && obj.num1 == 0)
        {
            throw "Divide by zero is not possible";
        }
        double n1 = num1 / obj.num1, n2 = num2 / obj.num2;
        Test tx(n1, n2);
        return tx;
    }
    void display()
    {
        cout << num1 << " " << num2 << endl;
    }
};
int main()
{

    double a1,b1,a2,b2;
    cin>>a1>>b1;
    cin>>a2>>b2;

    Test t1(a1,b1),t2(a2,b2), t3(0,0);
    cout<<"t1 :";
    t1.display();
    cout<<"t2 :";
    t2.display();

    
    t3 = t1 + t2;
    cout << "t1 + t2: ";
    t3.display();

    t3 = t1 - t2;
    cout << "t1 - t2: ";
    t3.display();

    t3 = t1 * t2;
    cout << "t1 * t2: ";
    t3.display();

    t3 = t1 / t2;
    cout << "t1 / t2: ";
    t3.display();



    return 0;

   /* Test t1(10, 20), t2(30, 40), t3(0, 0);
    t1.display();
    t2.display();
    t3 = t1 + t2;
    t3.display();
    t3 = t1 - t2;
    t3.display();
    t3 = t1 * t2;
    t3.display();
    t3 = t1 / t2;
    t3.display();
    return 0;*/
}