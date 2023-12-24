// Define a class Calculator with a function add_numbers that takes two parameters and returns their sum. Implement function overloading for the add_numbers function to handle cases where either two or three numbers are provided and return their sum.
#include <iostream>
using namespace std;
class Calculator{

public:
    int add_numbers(int num1, int num2){
        return num1 + num2;
    }
    int add_numbers(int num1, int num2, int num3){
        return num1 + num2 + num3;
    }

};
int main()
{
    Calculator cal;
    int num1, num2;
    cout<<"Enter Two numbers : ";
    cin>>num1>>num2;
    cout <<"Sum of two number : " <<cal.add_numbers(num1,num2) << endl;
   
    int num3;
    cout<<"Enter three number : ";
    cin>>num3;
    cout <<"Sum of three number : "<< cal.add_numbers(num1, num2, num3)<< endl;
    return 0;
}


/*
#include <iostream>
using namespace std;
class Calculator{

public:
    int add_numbers(int num1, int num2){
        return num1 + num2;
    }
    int add_numbers(int num1, int num2, int num3){
        return num1 + num2 + num3;
    }

};
int main()
{
    Calculator cal;
    int num1, num2;
    cout<<"Enter Two numbers : ";
    cin>>num1>>num2;
    cout <<"Sum of two number" <<cal.add_numbers(num1,num2) << endl;
   
    int num3;
    cout <<"Sum of three number : "<< cal.add_numbers(num1, num2, num3)<< endl;
    return 0;
}
*/