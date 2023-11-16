/*1. Create a base class Shape with attributes and methods.Derive classes like Circle and Rectangle from it.*/
#include<iostream>
using namespace std;
//Create Base class 
class Shape
{
    protected:
        double radius;
        double length;
        double width;

};
//class
class Circle : private Shape
{
    public:
        Circle(double r)
        {
            radius=r;
        }
        double area()
        {
            return 3.1416*radius*radius;
        }
};

//Rectangle
class Rectangle : private Shape
{
    public:
        Rectangle(double l, double w)
        {
            length=l;
            width= w;
        }
        double area()
        {
            return length*width;
        }
};

int main()
{
    double radius;
    cout<<"Enter The Circle Radius:";
    cin>>radius;

    Circle c(radius);
    cout<<"Circle Area:"<<c.area()<<endl;

    double length,width;
    cout<<"Enter The Length:";
    cin>>length;
    cout<<"Enter The Width:";
    cin>>width;

    Rectangle r(length,width);
    cout<<"Rectangle Area:"<<r.area()<<endl;

    return 0;
}


