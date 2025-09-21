#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    // Input score
    cout << "Enter the student's score (0-100): ";
    cin >> score;

    // Validate input
    if(score < 0 || score > 100) {
        cout << "Invalid score entered!" << endl;
        return 0;
    }

    // Determine grade
    if(score >= 90)
        grade = 'A';
    else if(score >= 80)
        grade = 'B';
    else if(score >= 70)
        grade = 'C';
    else if(score >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Output grade
    cout << "The student's grade is: " << grade << endl;

    return 0;
}
