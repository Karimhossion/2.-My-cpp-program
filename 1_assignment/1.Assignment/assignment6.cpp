#include <iostream>
using namespace std;
class Triangle
{
private:
    double length1, length2, length3;

public:
    void inputSides();
    void determineType();
};

void Triangle::inputSides()
{
    cout << "Enter Length of Side 1: ";
    cin >> length1;
    cout << "Enter Length of Side 2: ";
    cin >> length2;
    cout << "Enter Length of Side 3: ";
    cin >> length3;
}

void Triangle::determineType()
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
    Triangle t;
    t.inputSides();
    t.determineType();

    return 0;
}

