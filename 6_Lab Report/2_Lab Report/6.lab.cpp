/*6. Write a C++ program to copy all elements from an array to another array.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    int givenArray[n], copyArray[n];
    cout<<"Enter The Elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>givenArray[i];
    }
    cout<<"Array Copying:";
    for (int i = 0; i < n; i++)
    {
        copyArray[i]=givenArray[i];
        cout<<copyArray[i]<<" ";
    }
    return 0;  
}