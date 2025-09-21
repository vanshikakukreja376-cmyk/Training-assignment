
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is NOT a prime number.";
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i * i <= n; i++) {  // check till sqrt(n)
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << n << " is a prime number.";
    else
        cout << n << " is NOT a prime number.";

    return 0;
}
