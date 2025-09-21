
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms (N): ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input! N must be positive.";
        return 0;
    }

    int a = 0, b = 1;

    cout << "Fibonacci Series: ";

    // Print first N terms
    for (int i = 1; i <= n; i++) {
        cout << a << " ";   // print current term
        int next = a + b;   // calculate next term
        a = b;              // shift forward
        b = next;
    }

    return 0;
}
