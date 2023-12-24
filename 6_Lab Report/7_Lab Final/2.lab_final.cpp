#include<iostream>
using namespace std;
class Shape
{
    public:
        double Area, Perimeter;
};
class Circle : public Shape
{
    public:
        double Radius;
        Circle(double R)
        {
            Radius=R;
        }
        void Caculate_Area_Per()
        {
            cout<<"Area : "<< 3.1416*Radius*Radius<<endl;
            cout<<"Perimeter : "<< 2*3.1416*Radius<<endl;
        }
};
class Rectangle : public Shape
{
    public:
        double Length, Height;
        Rectangle(double L, double H)
        {
            Length=L;
            Height=H;
        }
        void Caculate_Area_Per()
        {
            cout<<"Area : "<< Length*Height<<endl;
            cout<<"Perimeter :"<<2*(Length+Height)<<endl;
        }
};
int main()
{
    double Radius;
    cout<<"Enter the Radius : ";
    cin>>Radius;
    Circle c(Radius);
    c.Caculate_Area_Per();

    double Length, Height;
    cout<<"Enter the Length : ";
    cin>>Length;
    cout<<"Enter the Height : ";
    cin>>Height;
    Rectangle r(Length,Height);
    r.Caculate_Area_Per();
    return 0;
}