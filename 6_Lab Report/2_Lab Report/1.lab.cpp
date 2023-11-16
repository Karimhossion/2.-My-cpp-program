/*1. Write a C++ program to print all negative elements in an array.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of Array:"; // size array user
    cin >> n;
    int array[n]; // Declare array
    cout << "Enter the elements:";
    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
        if (array[i] < 0)
        {
            cout << array[i]<<" ";
        }
    }
    return 0;
}

/*#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of Array:";
    cin >> n;
    int array[n]; // Declare array

    cout << "Enter the elements:";
    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    cout << "Negative elements:";
    for (int i = 0; i < n; ++i)
    {
        if (array[i] < 0)
        {
            cout << array[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
*/
