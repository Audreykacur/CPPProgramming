//
// Created by Audrey Kacur on 2/6/22.
//

/*
 * A mobile phone service provider has three different subscription packages for its customers:
        Package A: For $39.99 per month 450 minutes are provided.
                   Additional minutes are $0.45 per minute.
        Package B: For $59.99 per month 900 minutes are provided.
                   Additional minutes are $0.40 per minute.
        Package C: For $69.99 per month unlimited minutes provided.

    Write a program that calculates a customer’s monthly bill.
    It should ask which package the customer has purchased and how many minutes were used.

    It should then display the total amount due.

    Input Validation: Be sure the user only selects package A, B, or C.
 */

//Mobile Service Provider
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //constants for menu choices
    const int PACKAGE_A_CHOICE = 1;
    const int PACKAGE_B_CHOICE = 2;
    const int PACKAGE_C_CHOICE = 3;
    const int QUIT_CHOICE = 4;

    //Constants for base package rates
    const double PACKAGE_A_BASE = 39.99;
    const double PACKAGE_B_BASE = 59.99;
    const double PACKAGE_C_BASE = 69.99;

    //Constants for minutes provided
    const double PACKAGE_A_MINS = 450.0;
    const double PACKAGE_B_MINS = 900.0;
    const double PACKAGE_C_MINS = 0.0;

    //Constants for additional minute rates
    const double PACKAGE_A_ADD = 0.45;
    const double PACKAGE_B_ADD = 0.40;
    const double PACKAGE_C_ADD = 0.0;

    int choice; // to hold a menu choice
    double mins; // to hold the minutes used
    double baseCost; // to hold the cost of the package
    double addMins; // to hold the additional minutes used
    double addCharges; // to hold the additional charges
    double total; // to hold the total amount due

    //Display the menu and get a choice
    cout << "Select a subscription package: \n"
         << "1. Package A\n"
         << "2. Package B\n"
         << "3. Package C\n"
         << "4. Quit\n\n";
    cin >> choice;

    //Set the numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

    //Respond to the user's menu selection
    switch(choice)
    {
        case PACKAGE_A_CHOICE:
            //get the number of hours used.
            cout << "How many minutes were used? ";
            cin >> mins;

            //Set the cost of the package
            baseCost = PACKAGE_A_BASE;

            //Determine if any additional hours were used.
            addMins = mins - PACKAGE_A_MINS;
            if (addMins <= 0) addMins = 0;

            //Calculate the charges for any additional hours
            addCharges = addMins * PACKAGE_A_ADD;

            //Calculate and diisplay the total amount due
            total = baseCost + addCharges;
            cout << "The total amount due is $" << total << endl;
            break;
        case PACKAGE_B_CHOICE:
            //get the number of hours used.
            cout << "How many minutes were used? ";
            cin >> mins;

            //Set the cost of the package
            baseCost = PACKAGE_B_BASE;

            //Determine if any additional hours were used.
            addMins = mins - PACKAGE_B_MINS;
            if (addMins <= 0) addMins = 0;

            //Calculate the charges for any additional hours
            addCharges = addMins * PACKAGE_B_ADD;

            //Calculate and diisplay the total amount due
            total = baseCost + addCharges;
            cout << "The total amount due is $" << total << endl;
            break;




        case PACKAGE_C_CHOICE:
            //get the number of hours used.
            cout << "How many minutes were used? ";
            cin >> mins;

            //Set the cost of the package
            baseCost = PACKAGE_C_BASE;

            //Determine if any additional hours were used.
            addMins = mins - PACKAGE_C_MINS;
            if (addMins <= 0) addMins = 0;

            //Calculate the charges for any additional hours
            addCharges = addMins * PACKAGE_C_ADD;

            //Calculate and diisplay the total amount due
            total = baseCost + addCharges;
            cout << "The total amount due is $" << total << endl;
            break;

        case QUIT_CHOICE:
            cout << "Program ending. \n";
            break;

        default:
            cout << "The valid choices are 1 through 4. Run the \n"
                 << "program again and select one of those.\n\n";
    }
    return 0;
}