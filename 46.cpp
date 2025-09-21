
#include <iostream>

int main() {
    int rows = 5; // Use 4 for pattern 46, 5 for pattern 47
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
