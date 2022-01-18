// Restaurant Bill

/*

Compare this program that computes the tax and tip on a restaurant bill for a patron.

The tax should be the percentage of only the meal cost, the tip should only be a percentage of the meal plus tax

Tax/tip percentages are provided.

Display the meal cost, tax amount, tip amount, and total bill

*/

#include <iostream>
using namespace std;

int main()
{
    // constants
    const double TAX = 0.0675;
    const double TIP = 0.2;

    // store the meal cost
    double cost = 88.67;

    // Calculate and store the tax amount
    double tax = cost * TAX;

    // Calculate and store the tip amount
    double tip = TIP * (cost + tax);

    // Calculate and store the total bill
    double total = cost + tip + tax;

    // Display the meal cost, tax amount, tip, amount and total bill on the screen.

    cout << "Meal: $" << cost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total: $" << total << endl;

    return 0;
}