/*3. Write a C++ program to find the average of all array elements*/
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
    double average=(double)sum/n;
    cout<<"Average : "<<average<<endl;


    return 0;
}