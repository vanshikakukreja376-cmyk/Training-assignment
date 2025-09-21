
#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;
    cout << "Enter a number: ";
    cin >> num;

    int original = num; // store original number (optional, for clarity)

    // Loop until number becomes 0
    while (num != 0) {
        int digit = num % 10;   // extract last digit
        rev = rev * 10 + digit; // build reversed number step by step
        num = num / 10;         // remove last digit
    }

    cout << "Reversed number = " << rev;
    return 0;
}
