// Currency:
/*

Write a program that will convert U.S. dollar amounts to Japanese yen and to euros, storing the conversion factors in the 
constants YEN_PER_DOLLAR and EUROS_PER_DOLLAR. To get the most up-to-date exchange rates, search the Internet using the  term “currency exchange rate”.  
If you cannot find the most recent exchange rates, use the following:   
• 1 Dollar = 98.93 Yen   
• 1 Dollar = 0.74 Euros   
Format your currency amounts in fixed-point notation, with two decimal places of precision, and be 
sure the decimal point is always displayed. 

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double dollar;

    cout << "\nHow many dollars would you like to convert?" << endl; //print the question ou
    cin >> dollar;

    const double YEN_PER_DOLLAR = 114.13 * dollar;
    const double EUROS_PER_DOLLAR = 0.88 * dollar;

    cout << fixed << setprecision(2) << "\nYou have " << YEN_PER_DOLLAR << " yen." << endl;
    cout << "\nYou have " << EUROS_PER_DOLLAR << " euros." << endl;
}