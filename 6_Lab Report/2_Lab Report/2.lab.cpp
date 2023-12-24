/*2. Write a C++ program to find the sum of all array elements.*/
#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int array[n];

    cout<<"Enter the elements:";
    int sum=0;
    for(int i=0; i<n; ++i)
    {
        cin>>array[i];
        sum+=array[i];
    }
    cout<<"Sum : "<<sum<<endl;

    return 0;
}