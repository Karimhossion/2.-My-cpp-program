/*Create a base class Vehicle with attributes like speed and color. Derive classes like
Car and Bike. Add additional features specific to each derived class.*/
#include <iostream>
using namespace std;
class Vehicle
{
private:
    int speed;
    string color;

public:
    void setValue(int s, string c)
    {
        speed = s;
        color = c;
    }
    int getSpeed()
    {
        return speed;
    }
    string getColor()
    {
        return color;
    }
};
class Car : public Vehicle
{
public:
    Car(int s, string c)
    {
        setValue(s, c);
    }
    void carDetails()
    {
        cout << "_________Car Details__________:" << endl;
    }
    void displayInfo()
    {
        cout << "The Car Speed : " << getSpeed() << endl;
        cout << "The Car Color : " << getColor() << endl;
    }
};
class Bike : public Vehicle
{
public:
    Bike(int s, string c)
    {
        setValue(s, c);
    }
    void bikeDetails()
    {
        cout << "_______________Bike Details________:" << endl;
    }
    void displayInfo()
    {
        cout << "The Bike Speed : " << getSpeed() << endl;
        cout << "The Bike Color : " << getColor() << endl;
    }
};
int main()
{
    int speed;
    string color;
    cout<<"Enter Car Information________:"<<endl;
    cout << "Car Speed: ";
    cin >> speed;
    cout << "Car Color: ";
    cin >> color;

    cout<<"Enter Bike Information________:"<<endl;
    cout << "Bike Speed: ";
    cin >> speed;
    cout << "Bike Color: ";
    cin >> color;

    Car c(speed, color);
    c.carDetails();
    c.displayInfo();

    Bike b(speed, color);
    b.bikeDetails();
    b.displayInfo();
}