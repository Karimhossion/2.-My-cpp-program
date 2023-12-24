#include<iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    // Constructor with default values
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Display function to print the complex number
    void display()
    {
        cout << "Real: " << real << endl;
        cout << "Imaginary: " << imag << endl;
    }

    // Overloaded multiplication operator to multiply two complex numbers
    Complex operator*(Complex m)
    {
        Complex res;
        res.real = real * m.real;
        res.imag = imag * m.imag;
        return res;
    }
};

int main()
{
    int num1, num2,num3,num4;

    // User input for two numbers
    cout << "Enter the two numbers: ";
    cin >> num1 >> num2;
    cout<<"Enter two Number:";
    cin>>num3>>num4;

    // Creating two Complex objects
    Complex m1(num1,num2),m2(num3,num4);

    // Multiplying the two complex numbers
    Complex result = m1 * m2;

    // Displaying the result
   // cout << "Result: ";
    result.display();

    return 0;
}
