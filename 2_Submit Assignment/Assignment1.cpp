/*1. Write a C++ program to implement a class called Circle that has private member variables for
radius. Include member functions to calculate the circle's area and circumference.*/

#include <iostream>
using namespace std;

class Circle {
    double radi;

public:
    void setRadi(double r)
     { radi = r; }
    double calArea() { return 3.1416 * radi * radi; }
    double calCircumference() { return 2 * 3.1416 * radi; }
};

int main() {
    Circle myCircle;

    double radi;
    cout << "Enter Radius: ";
    cin >> radi;

    myCircle.setRadi(radi);

    cout << "Area: " << myCircle.calArea() << endl;
    cout << "Circumference: " << myCircle.calCircumference() << endl;

    return 0;
}
