
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Make numbers positive
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // Euclidean algorithm for HCF
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int hcf = x;

    if (hcf == 1)
        cout << a << " and " << b << " are CO-PRIME numbers.";
    else
        cout << a << " and " << b << " are NOT co-prime numbers.";

    return 0;
}
