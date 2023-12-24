/*4. Write a C++ program to find the maximum and minimum elements in an array*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int array[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int max=array[0];
    int min=array[0];

    for(int i=0;i<n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
        else if(array[i]<min)
        {
            min=array[i];
        }
    }
    cout<<"Maximum Element:"<<max<<endl;
    cout<<"Minimum Element:"<<min<<endl;
    return 0;
}