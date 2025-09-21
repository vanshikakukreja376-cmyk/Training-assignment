
#include <iostream>
using namespace std;

//1st Try

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        cout << string(n - i, ' ');   // leading spaces
        for (int j = 0; j < i; j++) {
            cout <<"* ";
        }
        cout << endl;
    }
    return 0;
}
