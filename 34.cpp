
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << num << " is NOT in the Fibonacci series.";
        return 0;
    }

    int a = 0, b = 1;

    // Special cases
    if (num == 0 || num == 1) {
        cout << num << " is in the Fibonacci series.";
        return 0;
    }

    int fib = a + b;
    while (fib <= num) {
        if (fib == num) {
            cout << num << " is in the Fibonacci series.";
            return 0;
        }
        a = b;         // move forward
        b = fib;
        fib = a + b;   // next Fibonacci number
    }

    cout << num << " is NOT in the Fibonacci series.";
    return 0;
}
