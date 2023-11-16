/*4. Write a C++ program to find the maximum and minimum elements in an array*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int array[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int mx=array[0];
    int mn=array[0];

    for(int i=0;i<n;i++)
    {
        if(array[i]>mx)
        {
            mx=array[i];
        }
        else if(array[i]<mn)
        {
            mn=array[i];
        }
    }
    cout<<"Maximum Element:"<<mx<<endl;
    cout<<"Minimum Element:"<<mn<<endl;
    return 0;
}