#include<iostream>
#include<cmath>
using namespace std;
class Shape
{
    public:
        double side;
        double side1,side2,side3;

        Shape(double side1, double side2,double side3)
        {
            this->side1=side1;
            this->side2=side2;
            this->side3=side3;
        }
        virtual double area()
        {
            return 0;
        }
        virtual double perimeter()
        {
            return 0;
        }
        virtual double circumference()
        {
            return 0;
        }
};
class Triangle : public Shape
{
    public:
        Triangle(double side1, double side2, double side3)
        :Shape(side1,side2,side3)
        {

        }
        double area()
        {
            double s=(side1+side2+side3)/2;
            double area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
            return area;
        }
        double perimeter()
        {
            return side1+side2+side3;
        }
};
class Circle : public Shape
{
    public:
    double radius;
    Circle(double r)
    :Shape(r,r,r),radius(r)
        {

        }
        double area()
        {
            return 3.1416*radius*radius;
        }
        double circumference()
        {
            return 2*3.1416*radius;
        }
};
int main()
{
    Shape *p;
    double side1,side2,side3;
    cout<<"Enter The 3 side : ";
    cin>>side1>>side2>>side3; 

    Triangle t(side1,side2,side3);
    p=&t;
    cout<<"Triangle Area : "<<p->area()<<endl;
    cout<<"Triangle Perimeter :"<<p->perimeter()<<endl;

    double radius;
    cout<<"Enter the radius : ";
    cin>>radius;

    Circle c(radius);
    p=&c;
    cout<<"Circle Area : "<<p->area()<<endl;
    cout<<"Circle Circumference :"<<p->circumference()<<endl;
    return 0;

}

