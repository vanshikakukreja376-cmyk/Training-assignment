
#include <iostream>
using namespace std;

int main() {
    int dayNumber;

    // Input number
    cout << "Enter a number (1-7): ";
    cin >> dayNumber;

    // Determine day of the week
    if(dayNumber == 1)
        cout << "Day is Sunday" << endl;
    else if(dayNumber == 2)
        cout << "Day is Monday" << endl;
    else if(dayNumber == 3)
        cout << "Day is Tuesday" << endl;
    else if(dayNumber == 4)
        cout << "Day is Wednesday" << endl;
    else if(dayNumber == 5)
        cout << "Day is Thursday" << endl;
    else if(dayNumber == 6)
        cout << "Day is Friday" << endl;
    else if(dayNumber == 7)
        cout << "Day is Saturday" << endl;
    else
        cout << "Invalid input! Please enter a number between 1 and 7." << endl;

    return 0;
}
