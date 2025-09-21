#include <iostream>
using namespace std;

int main() {
    int startYear, endYear;
    cout << "Enter start year: ";
    cin >> startYear;
    cout << "Enter end year: ";
    cin >> endYear;

    cout << "Leap years between " << startYear << " and " << endYear << ":\n";

    for (int year = startYear; year <= endYear; year++) {
        // Leap year conditions:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " ";
        }
    }
    cout << endl;

    return 0;
}
