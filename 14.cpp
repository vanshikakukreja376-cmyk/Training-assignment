#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input two integersss
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Check for division by zero
    if(num2 == 0) {
        cout << "Division by zero is not allowed!" << endl;
        return 0;
    }

    // Check divisibility
    if(num1 % num2 == 0)
        cout << num1 << " is divisible by " << num2 << "." << endl;
    else
        cout << num1 << " is not divisible by " << num2 << "." << endl;

    return 0;
}
