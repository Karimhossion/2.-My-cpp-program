#include <iostream>
using namespace std;
class Temp {
private:
    double fahrenheit, celsius;

public:
    void setFahrenheit(double f) {
        fahrenheit = f;
    }

    double calcCelsius() {
         celsius = (fahrenheit - 32) * 5 / 9;
        return celsius;
    }
};

int main() {
    Temp obj;
    double fahrenheit;

    cout << "Enter The Fahrenheit: ";
    cin >> fahrenheit;

    obj.setFahrenheit(fahrenheit);
    double celsius= obj.calcCelsius();

    cout << "Celsius: " << celsius << endl;

    return 0;
}
