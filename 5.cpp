
#include <iostream>
using namespace std;

int main() {
    float cpDozen, spDozen;   // cost price & selling price per dozen
    float cpPerBanana, spPerBanana;
    float totalCP, totalSP, result;

    // Input from user
    cout << "Enter Cost Price per dozen bananas: ";
    cin >> cpDozen;
    cout << "Enter Selling Price per dozen bananas: ";
    cin >> spDozen;

    // Convert to per banana
    cpPerBanana = cpDozen / 12.0;
    spPerBanana = spDozen / 12.0;

    // Calculate for 25 bananas
    totalCP = cpPerBanana * 25;
    totalSP = spPerBanana * 25;
    result = totalSP - totalCP;

    // Check profit or loss
    if (result > 0)
        cout << "\nProfit earned on selling 25 bananas = " << result << endl;
    else if (result < 0)
        cout << "\nLoss incurred on selling 25 bananas = " << -result << endl;
    else
        cout << "\nNo Profit, No Loss." << endl;

    return 0;
}
