
#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter N: ";
    cin >> N;

    for(int i = 1; i <= N; i++) {
    	int c = i*i*i;
        sum += c;
    }

    cout << "Sum of cubes of first " << N << " natural numbers = " << sum << endl;
    return 0;
}
