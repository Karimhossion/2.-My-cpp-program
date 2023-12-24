#include<iostream>
using namespace std;
class Shape
{
    protected:
        double length,width;
};
class Rectangle: public Shape
{
    public:
        Rectangle(double l, double w)
        {
            length=l;
            width=w;
        }
        double area()
        {
            return length*width;
        }
        double circumference()
        {
            return 2*(length+width);
        }
};
int main()
{
    double length,width;
    cin>>length>>width;

    Rectangle r(length,width);
    cout<<"Area: "<<r.area()<<endl;
    cout<<"Circumference :"<<r.circumference()<<endl;
    return 0;
}