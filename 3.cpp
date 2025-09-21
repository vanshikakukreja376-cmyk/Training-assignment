
#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, simpleInterest;

    // Input values
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Rate of Interest (%): ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Output result
    cout << "\nSimple Interest = " << simpleInterest << endl;

    return 0;
}
