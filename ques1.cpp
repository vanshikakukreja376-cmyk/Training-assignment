
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    double average;   // use double to handle decimal results

    cout << "Enter three integers:";
    cin >> num1 >> num2 >> num3;

    average = (num1 + num2 + num3) / 3.0;  // 3.0 ensures float division

    cout << "Average = " << average << endl;

    return 0;
}
