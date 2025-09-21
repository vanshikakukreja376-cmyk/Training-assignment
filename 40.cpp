
#include <iostream>
#include <cmath>
using namespace std;

// Function to check Armstrong property
bool isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;
    int temp = num;

    // Step 1: Count number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    // Step 2: Raise each digit to power of digits and add
    while (temp > 0) {
        int digit = temp % 10;          // extract last digit
        sum += pow(digit, digits);      // add digit^digits
        temp /= 10;                     // remove last digit
    }

    return sum == original; // Armstrong if equal
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number" << endl;
    else
        cout << num << " is not an Armstrong number" << endl;

    return 0;
}
