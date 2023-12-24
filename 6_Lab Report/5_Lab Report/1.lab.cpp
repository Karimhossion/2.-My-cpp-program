/*1. Create a base class Vehicle with a method start_engine() that prints "Engine started."Implement two classes Car and 
Motorcycle that inherit from Vehicle. Override the start_engine() method in each subclass to print a vehicle-specific engine start message*/
#include<iostream>
using namespace std;
class Vehicle
{
    public:
        virtual void start_engine()
        {
            cout<<"Engine Started"<<endl;
        }
};
class Car : public Vehicle
{
    public:
        void start_engine()
        {
            cout<<"Car engine started"<<endl;
        }
};
class Motorcycle : public Vehicle
{
    public:
        void start_engine()
        {
            cout<<"Motorcycle engine started"<<endl;
        }
};
int main()
{
    Car c;
    Motorcycle m;
    c.start_engine();
    m.start_engine();
    return 0;
}