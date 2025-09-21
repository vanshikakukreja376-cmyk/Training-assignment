
#include <iostream>
#include <cmath>
using namespace std;

// Reuse Armstrong function
bool isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;
    int temp = num;

    while (temp > 0) { // count digits
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) { // calculate sum of digit^digits
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    cout << "Armstrong numbers under 1000 are:" << endl;
    for (int i = 1; i < 1000; i++) { // loop through 1 to 999
        if (isArmstrong(i)) {
            cout << i << " "; // print if Armstrong
        }
    }
    cout << endl;
    return 0;
}
