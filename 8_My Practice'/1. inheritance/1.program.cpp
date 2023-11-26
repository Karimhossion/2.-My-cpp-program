/*create a base class Shape with attributes and methods. derive classes like Triangle (area, perimeter)and Square (area, perimeter) from it */
#include<iostream>
#include<cmath>
using namespace std;
class Shape
{
    public:
        double side, side1,side2,side3;
        
};
class Triangle: public Shape
{
    public:
        Triangle(double s1, double s2, double s3)
        {
            side1=s1;
            side2=s2;
            side3=s3;
        }
        double calculatearea()
        {
            double s=(side1+side2+side3)/2;
            double area= sqrt(s*(s-side1)*(s-side2)*(s-side3));
            return area;
        }
        double calculatePerimeter()
        {
            return side1+side2+side3;
        }
};
class Square : public Shape
{
    public:
        Square(double s)
        {
            side=s;
        }
        double calculateArea()
        {
            return side*side;
        }
        double calculatePerimeter()
        {
            return 4*side;
        }
};

int main()
{
    double side1,side2,side3;
    cout<<"________________Triangle Details______________:"<<endl;
    cout<<"Enter The Three Side:";
    cin>>side1>>side2>>side3;

    Triangle t(side1,side2,side3);
    cout<<"The Area:"<<t.calculatearea()<<endl;
    cout<<"The Perimeter:"<<t.calculatePerimeter()<<endl;

    double side;
    cout<<"________________Square Details______________:"<<endl;
    cout<<"Enter The Side:";
    cin>>side;

    Square s(side);
    cout<<"The Area:"<<s.calculateArea()<<endl;
    cout<<"The Perimeter:"<<s.calculatePerimeter()<<endl;

    return 0;
}
