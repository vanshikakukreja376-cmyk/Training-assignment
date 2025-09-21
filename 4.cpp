
#include <iostream>
using namespace std;

int main() {
    float length, width, height, volume;

    // Input dimensions
    cout << "Enter the length of the cuboid: ";
    cin >> length;
    cout << "Enter the width of the cuboid: ";
    cin >> width;
    cout << "Enter the height of the cuboid: ";
    cin >> height;

    // Calculate volume
    volume = length * width * height;

    // Output result
    cout << "\nThe volume of the cuboid is: " << volume << endl;

    return 0;
}
