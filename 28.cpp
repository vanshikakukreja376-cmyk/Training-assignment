
#include <iostream>
using namespace std;

int main() {
    long long num;  
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        cout << "Number of digits: 1";
        return 0;
    }

    int count = 0;
    if (num < 0) num = -num;  // handle negative numbers

    while (num > 0) {
        num = num / 10;  // remove last digit
        count++;         // increment digit count
    }

    cout << "Number of digits: " << count;
    return 0;
}
