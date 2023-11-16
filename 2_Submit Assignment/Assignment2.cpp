/*2. Write a C++ program to create a class called Rectangle that has private member variables for
length and width. Implement member functions to calculate the rectangle's area and perimeter.*/

#include <iostream>
using namespace std;
class Rectangle {
private:
    double len;
    double wid;

public:
    Rectangle(double l, double w) : len(l), wid(w) {}

    double calarea() {
        return len * wid;
    }

    double calperi() {
        return 2 * (len + wid);
    }
};

int main() {
    double len, wid;

    cout << "Enter length: ";
    cin >> len;

    cout << "Enter width: ";
    cin >> wid;

    Rectangle rectangle(len, wid);

    cout << "Area: " << rectangle.calarea() << endl;
    cout << "Perimeter: " << rectangle.calperi() << endl;

    return 0;
}

