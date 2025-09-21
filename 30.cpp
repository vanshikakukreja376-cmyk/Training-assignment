
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int x = a, y = b; // keep original values (for LCM calculation)

    // Find GCD using Euclid's algorithm
    while (b != 0) {
        int temp = b;
        b = a % b; // remainder becomes new divisor
        a = temp;  // divisor becomes new dividend
    }

    int gcd = a;  // after loop, 'a' contains GCD

    // Use formula: LCM(a,b) = (a*b)/GCD
    // 1LL ensures multiplication is done in long long (prevents overflow)
    long long lcm = (1LL * x * y) / gcd;

    cout << "LCM = " << lcm;
    return 0;
}
