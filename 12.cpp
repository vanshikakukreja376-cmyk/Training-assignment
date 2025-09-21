#include <iostream>
using namespace std;

int main() {
    int age;

    // Input age
    cout << "Enter your age: ";
    cin >> age;

    // Classify age group
    if(age >= 0 && age <= 10)
        cout << "You are a Child." << endl;
    else if(age >= 11 && age <= 17)
        cout << "You are a Teenager." << endl;
    else if(age >= 18 && age <= 30)
        cout << "You are an Adult." << endl;
    else if(age >= 31)
        cout << "You are a Senior." << endl;
    else
        cout << "Invalid age entered!" << endl;

    return 0;
}
