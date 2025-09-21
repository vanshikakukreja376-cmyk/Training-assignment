
#include <iostream>

// Pattern 51: Inverted Right-Angled Triangle
void pattern51() {
    int rows = 4;
    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Pattern 52: Inverted Star Pyramid
void pattern52() {
    int rows = 4;
    for (int i = rows; i >= 1; --i) {
        // Print leading spaces
        for (int space = 0; space < rows - i; ++space) {
            std::cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "Pattern 51:" << std::endl;
    pattern51();
    std::cout << "\nPattern 52:" << std::endl;
    pattern52();
    return 0;
}
