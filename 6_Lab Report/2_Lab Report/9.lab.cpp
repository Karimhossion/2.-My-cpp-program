/*9. Write a C++ program to create a function like sortElements(int n[ ]), the function will sort the
array elements in descending order where the array is passed as a parameter. Finally, print that
sorted array. */
#include <iostream>
using namespace std;
void sortElements(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int array[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    sortElements(array, n);
    cout << "descending: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    cout << endl;

    return 0;
}
