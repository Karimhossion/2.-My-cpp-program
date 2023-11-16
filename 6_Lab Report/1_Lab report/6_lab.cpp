/*6. Write a program to generate Fibonacci series up to user choice. (1 1 2 3 5 8 13 21 34………….)
*/

#include <iostream>

using namespace std;

// Function to generate Fibonacci series up to a given term
void generateFibonacci(int n) {
    int num1 = 0, num2 = 1, num3;

    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 1; i <= n; ++i) {
        cout << num1 << " ";

        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
}

int main() {
    int terms;

    // Input from the user
    cout << "Enter the number: ";
    cin >> terms;

    // Check if the user entered a valid number of terms
    if (terms <= 0) {
        cout << "Please enter a positive integer.\n";
        return 1; // Return an error code
    }

    // Generate and print the Fibonacci series
    generateFibonacci(terms);

    return 0;
}
