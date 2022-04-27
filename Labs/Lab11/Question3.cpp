// Created by Audrey Kacur on 4/6/22.

/*
Write a program that simulates a soft drink machine. The program should use a structure that stores the following data:
- Drink Name
- Drink Cost
- Number of Drinks in Machine
The program should create an array of five structures. The elements should be initialized with the following data:
Drink	    Cost	Number
Cola	    0.75	20
Root Beer	0.75	20
Lemon-Lime	0.75	20
Grape	    0.80	20
Cream	    0.80	20
Each time the program runs, it should enter a loop that performs the following steps: A list of drinks is displayed on the screen.
The user should be allowed to either quit the program or pick a drink.
If the user selects a drink, he or she will next enter the amount of money that is to be inserted into the drink machine.
The program should display the amount of change that would be returned and subtract one from the number of that drink left in the machine.
If the user selects a drink that has sold out, a message should be displayed. The loop then repeats.
When the user chooses to quit the program it should display the total amount of money the machine earned.

When the user enters an amount of money, do not accept negative values or values greater than $1.00.
 */


//Chapter 11: Programming Challenge 13: Drink Machine Simulator
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

//Constants for array
const int NUM_DRINKS = 5;

//Declaration of the Drink structure
struct Drink
{
    string name;    //Drink name
    double price;   //Price of the drink
    int num;        //Number of cans in the machine
};

//Function prototypes
int getChoice(Drink []);
void transaction (Drink [], int, double &);

int main()
{
    int choice; //Menu choice
    double earnings = 0;     //Drink machine earnings

    //Array of drinks in the machine
    Drink machine[NUM_DRINKS] = {
            {"Cola      ", 0.75, 20},
            {"Root Beer ", 0.75, 20},
            {"Lemon-Lime", 0.75, 20},
            {"Grape Soda", 0.80, 20},
            {"Cream Soda", 0.80, 20},
    };

    cout << fixed << showpoint << setprecision(2); //set the floating-point output formatting

    choice = getChoice(machine); //display the menu and process the user's choice
    while (choice != 5)
    {
        transaction(machine, choice, earnings); //Process the transaction
        choice = getChoice(machine); //Get the next choic
    }

    cout << "Total earnings: $" << earnings << endl; //Display the machine's total earnings
    return 0;
}

/*
    Function getChoice
        this function gets the user's choice and returns that value minus one.
        this adjustment is made because the value will be used aas a subscript
        into the Drink array by the transaction function
 */

int getChoice (Drink m[])
{
    int choice; //The user's choice
    cout << endl;

    //Display a list of drinks preceded by a number
    for (int x = 0; x < NUM_DRINKS; x++) //This will be the menu
    {
        cout << (x+1) << ") " << m[x].name << "\t\t";
        cout << m[x].price << endl;
    }

    cout << (NUM_DRINKS + 1) << ") Leave the drink machine\n\n"; //Display the last menu item, which is to leave the drink machine
    cout << "Choose one: "; //Get the user's choice
    cin >> choice;

    while (choice < 1 || choice > 6) //Validate the choice
    {
        cout << "bad choice. Choose one: ";
        cin >> choice;
    }
    return choice -1; //Return the choice, as a subscript into the array of drinks
}

void transaction(Drink m[], int choice, double &earnings) // Function transaction: This function processes the user's choice and updates the earnings variable
{
    double money; //The amount of money tendered

    if (m[choice].num == 0) //If the selected drink is sold out, display a message and get out of this function
    {
        cout << "Sorry, that selection is sold out. \n";
        return;
    }

    cout << "Enter an amount of money: ";//Get some money from the customer
    cin >> money;

    while(money < m[choice].price || money > 1.0) //Make sure the customer entered at lease enough for the selected drink, and no more than $1.00
    {
        cout << "Enter at least " << m[choice].price;
        cout << "and not more than 1 dollar.\n";
        cin >> money;
    }

    if (money >= m[choice].price) //process the selection and give back any change that is due
    {
        cout << "\nThump, thump, thump, splat!\n" //Dispense the drink
             << "Enjoy your beverage!\n\n";

        cout << "Change calculated: " << (money - m[choice].price) << endl; //Calculate any change that is due

        if ((money - m[choice].price) > 0) //If change is due, give it to the customer
            cout << "Your change, " << (money - m[choice].price) << " has just dropped into the Change dispenser. \n\n";

        earnings += m[choice].price; //update our earnings

        m[choice].num = m[choice].num - 1; //Decrease the number of cans of the selected drink currently in the machine

        cout << "There are " << m[choice].num << "drinks of that type left.\n"; //Display the number of cans of this drink currently in the machine
    }
}