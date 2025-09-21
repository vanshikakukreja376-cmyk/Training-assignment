
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Handle negatives
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;  // remainder
        a = temp;   // update
    }

    cout << "HCF = " << a;
    return 0;
}
