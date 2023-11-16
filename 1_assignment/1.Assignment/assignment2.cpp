#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length=l;
        width=w;
    }

    double calarea() {
        return length * width;
    }

    double calperimeter() {
        return 2 * (length + width);
    }
};

int main() {
    double l, w;

    cout<< "Enter length and Width: ";
    cin>>l>>w;

    Rectangle x(l, w);

    cout << "Area: " << x.calarea() <<endl;
    cout << "Perimeter: " <<x.calperimeter() <<endl;

    return 0;
}
