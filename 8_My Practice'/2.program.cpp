#include<iostream>
using namespace std;
class Shape
{
    public:
        double dim1,dim2;
        Shape(double dim1,double dim2)
        {
            this->dim1=dim1;
            this->dim2=dim2;
        }
        virtual double area()
        {
            return 0;
        }
};
class Triangle : public Shape
{
    public:
        Triangle(double dim1, double dim2):Shape(dim1,dim2)
        {

        }
        double area()
        {
            return 0.5*dim1*dim2;
        }
};
class Rectangle : public Shape
{
    public:
        Rectangle(double dim1, double dim2):Shape(dim1,dim2)
        {

        }
        double area()
        {
            return dim1*dim2;
        }
};
int main()
{
    Shape *p;
    double dim1,dim2;
    cout<<"Enter the dim1 and dim2:";
    cin>>dim1>>dim2;

    Triangle t(dim1,dim2);
    p=&t;
    cout<<"Triangle Area: "<<p->area()<<endl;
    
    Rectangle r(dim1,dim2);
    p=&r;
    cout<<"Rectangle Area :"<<p->area()<<endl;
    return 0;
}