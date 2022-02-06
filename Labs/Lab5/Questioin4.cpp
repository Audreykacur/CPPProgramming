//
// Created by Audrey Kacur on 2/6/22.
//

/*
    Write a program that asks the user to enter the amount that he or she has budgeted for a month.

    A loop should then prompt the user to enter each of his or her expenses for the month and keep a running total.
    When the loop finishes, the program should display the amount that the user is over or under budget.
 */

//Budget Analysis

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double budget; // budget for the month
    double expense; // to hold expense amount
    double totalExpenses; // to hold the total expenses
    double diff; // amount over or under budget

    //Initialize the accumulator to 0
    totalExpenses = 0.0;

    //Get the budget amount
    cout << "Enter your budget for the month: ";
    cin >> budget;

    do
    {
        //Get an expense amount
        cout << "Enter an expense, or a negative number to quit: ";
        cin >> expense;

        //Add the expense to the accumulator
        if (expense >= 0)
            totalExpenses += expense;
    } while (expense >= 0);

    //Calculate the amount over or under budget
    diff = budget - totalExpenses;

    //Set the output formatting
    cout << setprecision(2) << fixed;

    //Display the amount over or under
    if (diff < 0)
    {
        //diff is negative, so make it positive for display purposes and then display the status
        diff = -(diff);
        cout << "You are OVER budget by $ " << diff << endl;
    }
    else if (diff > 0)
    {
        cout << "You are UNDER budget by $ " << diff << endl;
    }
    else
    {
        cout << "You spent the budget amount exactly.\n";
    }
    return 0;

}