/* Write a program that takes three numbers as input and show the largest number as output using constructor
function where the numbers will be passed as arguments to the parameters.*/
#include<iostream>
using namespace std;

class LargestNumber
{
private:
    double num1, num2, num3;

public:
    LargestNumber(double n1, double n2, double n3) // Constructor with parameters
    {
        num1 = n1;
        num2 = n2;
        num3 = n3;
    }

    double showLargest()
    {
        if (num1 >= num2 && num1 >= num3)
        {
            return num1;
        }
        else if (num2 >= num1 && num2 >= num3)
        {
            return num2;
        }
        else
        {
            return num3;
        }
    }
};

int main()
{
    double num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    LargestNumber obj(num1, num2, num3);
    cout << "The Largest Number: " << obj.showLargest() << endl;
    return 0;
}





/*// write a program that takes to numbers as input and shows the largest number as ouput where the logic function part will be private and it will be called in a public function;
#include <iostream>
using namespace std;

class BigNumber
{

    int a, b;
    int calcMax()
    {
        if (a > b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }

public:
    BigNumber(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "Max: " << calcMax() << endl;
    }
};
int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    BigNumber num(x, y);
    num.display();

    return 0;
}
*/
/*2. Write c++  program that takes to numbers as input and show the largest number as output where the logic function part will be private and it will be called in a public function.
. Write a program that has three overloaded functions/overloading functions.*/
/*
#include<iostream>
using namespace std;
class LargestNumber
{
    private:
        double num1, num2;    //private সেকশনে দুটি গোপন সংখ্যা রাখা হয়েছে যা হলো num1 এবং num2।
        double showNumber()   //গোপন ফাংশন (showNumber()) দ্বারা দুটি সংখ্যার মধ্যে বড়টি বের করার জন্য একটি লজিক ফাংশন তৈরি করা হয়েছে।
        {
            if(num1>num2)
            {
                return num1;
            }
            else
            {
                return num2;
            }
        }
    public:
        LargestNumber(double n1, double n2)         //public সেকশনে দুটি সংখ্যা নেয়ার জন্য একটি কনস্ট্রাক্টর তৈরি করা হয়েছে যা দুটি সংখ্যা নেয় এবং গোপন ফাংশন (showNumber()) কে কল করে ফলাফল ডিসপ্লে করে।
        {
            num1 = n1;
            num2 = n2;
            cout<<"The Largest Number : "<<showNumber()<<endl;
        }     
};
int main()  //main ফাংশনে দুটি সংখ্যা ইনপুট নেয়া হয় এবং LargestNumber ক্লাসের অবজেক্ট তৈরি করা হয়েছে, যা প্রোগ্রামের প্রধান অংশে দুটি সংখ্যার বৃহত্তম সংখ্যাটি দেখাবে।
{
    double num1, num2;
    cout<<"Enter the Two Numbers : ";
    cin>>num1>>num2;
    LargestNumber obj(num1,num2);
}*/