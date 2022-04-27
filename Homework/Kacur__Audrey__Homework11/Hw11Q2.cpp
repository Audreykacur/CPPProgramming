// Created by Audrey Kacur on 4/6/22.

/*


2. Monthly Budget
A student has established the following monthly budget:
    Housing 500.00
    Utilities 150.00
    Household Expenses 65.00
    Transportation 50.00
    Food 250.00
    Medical 30.00
    Insurance 100.00
    Entertainment 150.00
    Clothing 75.00
    Miscellaneous 50.00
Write a program that has a MonthlyBudget structure designed to hold each of these expense categories.

The program should pass the structure to a function that asks the user to enter the amounts spent in
each budget category during a month. The program should then pass the structure to a function that displays
a report indicating the amount over or under in each category, as well as the amount over or under for the entire monthly budget.

*/

#include <iostream>
using namespace std;

struct MonthlyBudget //a MonthlyBudget structure designed to hold each of these expense categories.
{
    double Housing;
    double Utilities;
    double HouseholdExpenses;
    double Transportation;
    double Food;
    double Medical;
    double Insurance;
    double Entertainment;
    double Clothing;
    double Miscellaneous;
};

void AskUser (MonthlyBudget bug[]) //asks the user to enter the amounts spent in each budget category during a month.
{

    cout << "Please enter the amount you spent on Housing: ";
    cin >> bug[1].Housing;

    cout << "Please enter the amount you spent on Utilities: ";
    cin >> bug[1].Utilities;

    cout << "Please enter the amount you spent on Household Expenses: ";
    cin >> bug[1].HouseholdExpenses;

    cout << "Please enter the amount you spent on Transportation: ";
    cin >> bug[1].Transportation;

    cout << "Please enter the amount you spent on Food: ";
    cin >> bug[1].Food;

    cout << "Please enter the amount you spent on Medical: ";
    cin >> bug[1].Medical;

    cout << "Please enter the amount you spent on Insurance: ";
    cin >> bug[1].Insurance;

    cout << "Please enter the amount you spent on Entertainment: ";
    cin >> bug[1].Entertainment;

    cout << "Please enter the amount you spent on Clothing: ";
    cin >> bug[1].Clothing;

    cout << "Please enter the amount you spent on Miscellaneous: ";
    cin >> bug[1].Miscellaneous;
}


void Display(MonthlyBudget bug[])
{
    //displays a report indicating the amount over or under in each category
    //displays the amount over or under for the entire monthly budget.
    double house = bug[0].Housing - bug[1].Housing;
    double util = bug[0].Utilities - bug[1].Utilities;
    double HoEx = bug[0].HouseholdExpenses - bug[1].HouseholdExpenses;
    double trans = bug[0].Transportation - bug[1].Transportation;
    double food = bug[0].Food - bug[1].Food;
    double med = bug[0].Medical - bug[1].Medical;
    double Insurance = bug[0].Insurance - bug[1].Insurance;
    double Entertainment = bug[0].Entertainment - bug[1].Entertainment;
    double clothing =  bug[0].Clothing - bug[1].Clothing;
    double Miscellaneous = bug[0].Miscellaneous - bug[1].Miscellaneous;

    cout << "Remaining balence: " << (house + util + HoEx + trans + food + med + Insurance + Entertainment + clothing + Miscellaneous) << endl;


    cout << "The remaining balence for each category: " << endl;
    cout << "Housing: "           << house      << endl;
    cout << "Utilities: "         << util       << endl;
    cout << "HouseholdExpenses: " << HoEx       << endl;
    cout << "Transportation: "    << trans      << endl;
    cout << "Food: "              << food       << endl;
    cout << "Medical: "           << med        << endl;
    cout << "Insurance: "         << Insurance  << endl;
    cout << "Entertainment: "     << Entertainment << endl;
    cout << "Clothing: "          << clothing   << endl;
    cout << "Miscellaneous: "     << Miscellaneous << endl;

}



int main()
{
    MonthlyBudget bug[2] =
            {
                    {500, 150, 65, 50, 250, 30, 100, 150, 75, 50}, // hold each of these expense categories.
                    {0  ,  0 ,  0,  0,   0,  0,   0,   0,  0,  0}
            };

    //So without this it would not save the values the struct was holding can you help me understand why?
    bug[0].Housing = 500;
    bug[0].Utilities = 150;
    bug[0].HouseholdExpenses = 65;
    bug[0].Transportation = 50;
    bug[0].Food = 250;
    bug[0].Medical = 30;
    bug[0].Insurance = 100;
    bug[0].Entertainment = 150;
    bug[0].Clothing = 75;
    bug[0].Miscellaneous = 50;

    AskUser(bug); //pass the structure to a function that takes user info
    Display(bug); //pass the structure to a function that prints it

}