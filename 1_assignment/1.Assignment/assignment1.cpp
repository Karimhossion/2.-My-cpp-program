#include <iostream>
using namespace std;

class Circle
{
    double radius;

public:
    void setRadius(double r)
    {
        radius = r;
    }
    double calArea()
    {
        return 3.1416 * radius * radius;
    }
    double calCircumference()
    {
         return 2 * 3.1416 * radius; 
    }
};

int main()
{
    Circle x;
    double radius;
    cout << "Enter Radius: ";
    cin >> radius;

    x.setRadius(radius);
    cout << "Area: " << x.calArea() << endl;
    cout << "Circumference: " << x.calCircumference() << endl;

    return 0;
}
