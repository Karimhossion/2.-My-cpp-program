/*8. Write a C++ program to print all unique elements in the array. */
#include <iostream>
#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 3, 1, 4, 3, 3, 8, 7, 7, 7, 2, 3, 4, 5, 1, 6, 7, 8, 9, 10, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        if (j == n)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}