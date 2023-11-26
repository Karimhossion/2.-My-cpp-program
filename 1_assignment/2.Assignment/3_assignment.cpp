/*3. Create a base class Vehicle with attributes like speed and color. Derive classes like
Car and Bike. Add additional features specific to each derived class.
*/

#include <iostream>
using namespace std;
class Vehicle
{
    private:
        int speed;
        string color;

    public:
        void setValue(string c, int s)
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
    Car(string c, int s)
    {
        Vehicle::setValue(c, s);
    }

    void start()
    {
        cout << "----Car Details:" << endl;
    }

    void printInfo()
    {
        cout << "Color: " << getColor() << endl;
        cout << "Speed: " << getSpeed() << endl;
    }
    
    void stop()
    {
        cout << "Car Details End." << endl;
    }
};
class Bike : public Vehicle
{
public:
    Bike(string c, int s)
    {
        Vehicle::setValue(c, s);
    }
    void start()
    {
        cout << "-----Bike Details:" << endl;
    }
    void printInfo()
    {
        cout << "Color: " << getColor() << endl;
        cout << "Speed: " << getSpeed() << endl;
    }
    void stop()
    {
        cout << "Bike Details End." << endl;
    }
};
int main()
{

    Car bmw("red", 100);
    bmw.start();
    bmw.printInfo();
    bmw.stop();

    cout<<"_____________________________"<<endl;

    Bike honda("black", 150);
    honda.start();
    honda.printInfo();
    honda.stop();
    
    return 0;
}