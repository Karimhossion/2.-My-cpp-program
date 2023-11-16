//2. Write a C++ program to display sum of first ten numbers.

#include<iostream>
using namespace std;
int main(){
    int i,sum=0;
    for (i=0;i<=10; i++)
    {
        sum+=i;
    }
    cout<<"Sum of First ten Numbers: "<<sum<<endl;
    return 0;
}