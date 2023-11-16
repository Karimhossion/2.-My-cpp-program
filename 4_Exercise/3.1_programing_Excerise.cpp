//3.1 Write a function using reference variables as arguments to swap the values of a pair of integers.
#include<iostream>
using namespace std;
void swapInteger(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;

}
int main()
{
  /*  int x=5;
    int y=10;*/
    int x,y;
    cout<<"Enter the x=";
    cin>>x;
    cout<<"Enter the y=";
    cin>>y;
    cout<<"Before Swapping: x="<<x<<", y="<<y<<endl;
    swapInteger(x,y);
    cout<<"After Swapping: x="<<x<<", y="<<y<<endl;
    return 0;
}