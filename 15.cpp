#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    // Input three sides
    cout<<"Enter the length of first side:";
    cin>>a;
    cout<<"Enter the length of second side:";
    cin>>b;
    cout<<"Enter the length of third side:";
    cin>>c;

    // Check for a valid triangle
    if(a + b > c && a + c > b && b + c > a) {
        // Classify triangle
        if(a == b && b == c)
            cout << "The Triangle is Equilateral." << endl;
        else if(a == b || b == c || a == c)
            cout << "The Triangle is Isosceles." << endl;
        else
            cout << "The Triangle is Scalene." << endl;
    }
    else {
        cout << "Invalid Triangle sides!" << endl;
    }

    return 0;
}
