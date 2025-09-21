
#include <iostream>
using namespace std;

int main() {
    int low, high;
    cout << "Enter two numbers (range): ";
    cin >> low >> high;

    if (low > high) {
        // swap if user enters in reverse order
        int temp = low;
        low = high;
        high = temp;
    }

    cout << "Prime numbers between " << low << " and " << high << ":\n";

    for (int n = low; n <= high; n++) {
        if (n < 2) continue; // skip 0 and 1

        bool isPrime = true;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << n << " ";
        }
    }

    return 0;
}
