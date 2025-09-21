
#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, num4, largest;

    // Input four numbers
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    // Assume the first number is the largest
    largest = num1;

    // Compare with the remaining numbers
    if(num2 > largest)
        largest = num2;
    if(num3 > largest)
        largest = num3;
    if(num4 > largest)
        largest = num4;

    // Output the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;
}
