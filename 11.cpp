#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    // Input three characters
    cout << "Enter first character: ";
    cin >> ch1;
    cout << "Enter second character: ";
    cin >> ch2;
    cout << "Enter third character: ";
    cin >> ch3;

    // Display characters with ASCII codes
    cout << "\nCharacter : ASCII Code\n";

    if(ch1 >= 32 && ch1 <= 126)  // printable ASCII
        cout << ch1 << " : " << int(ch1) << endl;
    else
        cout << ch1 << " : Non-printable ASCII" << endl;

    if(ch2 >= 32 && ch2 <= 126)
        cout << ch2 << " : " << int(ch2) << endl;
    else
        cout << ch2 << " : Non-printable ASCII" << endl;

    if(ch3 >= 32 && ch3 <= 126)
        cout << ch3 << " : " << int(ch3) << endl;
    else
        cout << ch3 << " : Non-printable ASCII" << endl;

    return 0;
}
