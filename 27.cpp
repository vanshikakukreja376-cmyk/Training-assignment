
#include <iostream>
using namespace std;

int main() {
    int n;
//    int factorial = 1; Gives wrong output if put value of n more than 4 bytes like n = 13
	unsigned long long factorial = 1; // use long long for large results

    cout << "Enter a number: ";
    cin >> n;

    if(n < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } 
    else {
        for(int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}
