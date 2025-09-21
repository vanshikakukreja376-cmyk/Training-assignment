
#include <iostream>

int main() {
    int n = 5; // Determines the height of one wing

    // Upper part of the butterfly
    for (int i = 1; i < n; ++i) {
        // Print left wing stars
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        // Print spaces in the middle
        for (int j = 1; j <= 2 * (n - i); ++j) {
            std::cout << " ";
        }
        // Print right wing stars
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Lower part of the butterfly
    for (int i = n; i >= 1; --i) {
        // Print left wing stars
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        // Print spaces in the middle
        for (int j = 1; j <= 2 * (n - i); ++j) {
            std::cout << " ";
        }
        // Print right wing stars
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
