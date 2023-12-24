#include<iostream>
using namespace std;

class Complex
{
private:
    int real,imag;

public:
    Complex(int r = 0,int i=0)
    {
        real = r;
        imag=i;
    }

    void display()
    {
        cout << real << endl;
        cout<<imag<<endl;
    }

    Complex operator*( Complex m)
    {
        Complex res;
        res.real = real * m.real;
        res.imag = imag * m.imag;
        return res;
    }
};

int main()
{
    int num1, num2;
    cout << "Enter the two numbers: ";
    cin >> num1 >> num2;

    Complex m1(num1);
    Complex m2(num2);

    Complex result = m1 * m2;

    cout << "Result: ";
    result.display();

    return 0;
}
