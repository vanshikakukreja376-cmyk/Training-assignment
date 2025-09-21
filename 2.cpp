#include <iostream>
using namespace std;

int main() {
    double radius, circumference;
    const double PI = 3.14159; 

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    circumference = 2 * PI * radius;

    cout << "Circumference of the circle = " << circumference << endl;

    return 0;
}
