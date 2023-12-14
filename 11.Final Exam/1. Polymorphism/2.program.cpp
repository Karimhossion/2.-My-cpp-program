#include<iostream>
using namespace std;
class Shape
{
    public:
        double dim1, dim2;

        Shape(double dim1, double dim2)  //used constructor
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
    //dim1,dim2 ,,,publice dewar jonno ai khane chole ashce
    public:
        Triangle (double dim1, double dim2)
        :Shape(dim1, dim2)
        {

        }
        double area()
        {
            return 0.5*dim1*dim2;
        }
};
class Rectangle : public Shape
{
    //dim1,dim2,,,publice dewa ace ai jonno call diyeniye chole ashci.
    public:
        Rectangle(double dim1,double dim2)
        :Shape(dim1, dim2)
        {
            //dim1,dim2 call koreci
        }
        double area()
        {
            return dim1*dim2;
        }
};

int main()
{
    Shape *p;
    double dim1, dim2;
    cout<<"Enter The Dim1 and Dim2:";
    cin>>dim1>>dim2;
    

    Triangle t(dim1, dim2);
    Rectangle r(dim1,dim2);

    p=&t;
    cout<<"Triangle Area : "<<p->area()<<endl;

    p=&r;
    cout<<"Rectangle Area : "<<p->area()<<endl;

    return 0;
}