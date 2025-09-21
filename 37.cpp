
#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers under 100:\n";

    for (int n = 2; n < 100; n++) {
        bool isPrime = true;

        // Check divisibility from 2 to vn
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
