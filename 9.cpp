#include <iostream>
using namespace std;
int main()
int power(int m, int n) {
    int result = 1;  // Start with result as 1 (since anything raised to 0 is 1)

    // Loop to multiply m, n times
    for (int i = 1; i <= n; i++) {
        result *= m;  // Multiply result by m in each iteration
    }

    return result;  // Return the final result
}

int main() {
    int m, n;

    // Take user input for m and n
    cout << "Enter the base (m): ";
    cin >> m;
    cout << "Enter the exponent (n): ";
    cin >> n;

    // Compute and display m raised to the power of n
    int result = power(m, n);
    cout << m << " raised to the power of " << n << " is: " << result << endl;

    return 0;
}