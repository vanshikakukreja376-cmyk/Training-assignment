
#include <iostream>
using namespace std;

int main() {
    int asciiCode;

    // Input ASCII code
    cout << "Enter an 9ASCII code (0-127): ";
    cin >> asciiCode;

    // Print corresponding character
    cout << "The character for ASCII code " << asciiCode << " is: " << char(asciiCode) << endl;

    return 0;
}
