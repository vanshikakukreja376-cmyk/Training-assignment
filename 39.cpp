
#include <iostream>
#include <cmath>
using namespace std;

// Function to check whether a number is prime
bool isPrime(int n) {
    if (n < 2) return false;  // Prime numbers are >= 2
    for (int i = 2; i <= sqrt(n); i++) {  // check divisibility till vn
        if (n % i == 0) return false;     // if divisible, not prime
    }
    return true; // otherwise prime
}

// Function to find next prime after given number
int nextPrime(int num) {
    int n = num + 1;   // start checking from next number
    while (true) {
        if (isPrime(n)) return n; // return if prime
        n++; // else check next
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Next prime number is: " << nextPrime(num) << endl;
    return 0;
}
