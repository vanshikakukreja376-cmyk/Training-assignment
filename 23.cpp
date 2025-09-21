
#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter N: ";
    cin >> N;

    for(int i = 1; i <= N; i++) {
    	if(i%2 == 0){
    		sum += i;
		}
    }

    cout << "Sum of first " << N << " even natural numbers = " << sum << endl;
    return 0;
}
