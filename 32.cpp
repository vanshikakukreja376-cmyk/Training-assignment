
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input! n must be positive.";
        return 0;
    }

    // First two Fibonacci numbers
    int a = 0, b = 1;

    if (n == 1) {
        cout << "Fibonacci term " << n << " = " << a;
    } 
    else if (n == 2) {
        cout << "Fibonacci term " << n << " = " << b;
    } 
    else {
        int fib;
        // Loop to calculate terms from 3 up to n
        for (int i = 3; i <= n; i++) {
            fib = a + b; // next term
            a = b;       // move forward
            b = fib;
        }
        cout << "Fibonacci term " << n << " = " << b;
    }

    return 0;
}
