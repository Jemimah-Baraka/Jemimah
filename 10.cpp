#include <iostream>
using namespace std;

// Recursive function to compute m raised to the power of n (m^n)
int power(int m, int n) {
    // Base case: any number raised to the power of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: multiply m by the result of m^(n-1)
    return m * power(m, n - 1);
}

int main() {
    int m, n;

    // Take user input for m and n
    cout << "Enter the base (m): ";
    cin >> m;
    cout << "Enter the exponent (n): ";
    cin >> n;

    // Compute and display m raised to the power of n using recursion
    int result = power(m, n);
    cout << m << " raised to the power of " << n << " is: " << result << endl;

    return 0;
}