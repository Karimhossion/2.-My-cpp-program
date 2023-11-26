/*7. Write a C++ program to count the total number of even and odd elements in an array. */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size Array:";
    cin>>n;
    int array[n];
    cout<<"Enter The Elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int even=0, odd=0;
    for (int  i = 0; i < n; i++)
    {
        if(array[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Even elements: "<<even<<endl;
    cout<<"Odd elements: "<<odd<<endl;

    return 0;
}