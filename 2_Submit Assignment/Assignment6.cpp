/*6. Write a C++ program to create a class called Triangle that has private member variables for the
lengths of its three sides. Implement member functions to determine if the triangle is equilateral,
isosceles, or scalene.*/

#include <iostream>
using namespace std;
class Triangle
{
private:
    double length1, length2, length3;

public:
    void getdata();
    void putdata();
};

void Triangle::getdata()
{
    cout << "Enter the Length side 1: ";
    cin >> length1;
    cout << "Enter the Length side 2: ";
    cin >> length2;
    cout << "Enter the Length side 3: ";
    cin >> length3;
}

void Triangle::putdata()
{
    if (length1 == length2 && length2 == length3)
    {
        cout << "Equilateral Triangle" << endl;
    }
    else if (length1 == length2 || length1 == length3 || length2 == length3)
    {
        cout << "Isosceles Triangle" << endl;
    }
    else
    {
        cout << "Scalene Triangle" << endl;
    }
}

int main()
{
    Triangle x;
    x.getdata();
    x.putdata();

    return 0;
}
