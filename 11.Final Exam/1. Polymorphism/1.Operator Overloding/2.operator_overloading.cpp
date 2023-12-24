//Binary Operator Overloading 
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imag;
    public:
        Complex(int r=0, int i=0)
        {
            real=r;
            imag=i;
        }
        void input()
        {
            cout<<real<<endl<<imag<<endl;
        }
        Complex operator *(Complex m)
        {
            Complex res;
            res.real=real*m.real;
            res.imag=imag*m.imag;
            return res;
        }
};
int main()
{
    Complex m1(10,20),m2(30,40);
    Complex m3=m1*m2;
    m3.input();
}