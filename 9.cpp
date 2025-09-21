
#include <iostream>
#include <string>
using namespace std;

int main() {
    string date;  // to store input in DD/MM/YYYY

    // Input date
    cout << "Enter date (DD/MM/YYYY): ";
    cin >> date;

    // Extract day, month, year using substr
    string day = date.substr(0, 2);    // first two chars
    string month = date.substr(3, 2);  // chars at position 3 and 4
    string year = date.substr(6, 4);   // chars at position 6 to 9

    
    cout << "Date - " << day << ", Month - " << month << ", Year - " << year << endl;

    return 0;
}
