// Created by Audrey Kacur on 4/20/22.

/*
    Write a program that simulates inventory bins in a warehouse. Each bin holds a number of the same type of parts.

    the program should usa a structure that keeps the following data:
    - description of the part kept in the bin
    - number of parts in the bin

    the program should have an array of 5 bins, initialized with the following data:
    Part Description        Number of Parts
    Valve                   10
    Bearing                 5
    Coupling                21
    Cable                   18
    Rod                     12

    the program should have the following functions:
    - AddParts: a function that increases a specific bin's part count by a specified number
    - RemoveParts: a function that decreases a specific bin's part count by a specified number

    when the program runs, it should repeat a loop that performs the following steps :
    - the user should see a list of what each bin holds and how many parts are in each bin
    - the user can choose to either quit the program or select a bin
    - when a bin is selected the user can either add parts to it or remove parts from it

    the loop then repeats, showing the updated bin data on the screen

    input validation: no bin can hold more than 30 parts, so don't let the user add more than a bin can hold.
    Also, don't accept negative values for the number of parts being added or removed
 */

#include <iostream>
using namespace std;

/*
    Also, don't accept negative values for the number of parts being added or removed
    */

struct bin //struct of the bins
{
    string name;
    int binValue;
};

double enterNumber() // allows user to enter the number they would like to add or subtract
{
    double amount = 0; //initializes the amount to 0
    cout << "Enter the amount you would like to add or subtract: "; //asks user for input
    cin >> amount; //takes the user input
    if (amount < 0 || amount > 30) // if the amount is less than 0 or greater than 30 it is invalid
    {
        cout << "Number invalid, try again: "; //tell user the number is invalid
        amount = enterNumber(); //function re-runs to get a new value
    }
    return amount; //return the amount the user entered
}

bin AddParts(int amount, bin one) //increases a specific bin's part count by a specified number
{
    double value = 0; //initializes a variable to hold what the new value will be for the item in struct
    value = one.binValue + amount; //the amount the item will now be with the addition
    if (value < 30)  one.binValue = value; // if the value is not greater than 30 it will save the value
    else cout << "You can not have more than 30 items please try again.\n"; // if it is greater than 30 it will tell the user that it could not complete the transaction
    return one; //returns the struct
}

bin RemoveParts(int amount, bin one) //decreases a specific bin's part count by a specified number
{
    double value = 0; //initializes a variable to hold what the new value will be for the item in struct
    value = one.binValue - amount; //the amount the item will now be with the subtraction
    if (value > 0)  one.binValue = value; // if the value is  greater than 0 it will save the value
    else cout << "You can not have more than 30 items please try again.\n"; // if it is greater than 30 it will tell the user that it could not complete the transaction
    return one; //returns the updated struct
}

int main()
{
    bin valve;
    bin bearing;
    bin coupling;
    bin cable;
    bin rod;

    valve = (bin){.name = "valve", .binValue = 10};   //assigns the values for the valve bin values
    bearing = (bin){.name = "bearing", .binValue = 5};  //assigns the values for the bearing bin values
    coupling = (bin){.name = "coupling", .binValue = 21};//assigns the values for the coupling bin values
    cable = (bin){.name = "cable", .binValue = 18};   //assigns the values for the cable bin values
    rod = (bin){.name = "rod", .binValue = 12};     //assigns the values for the rod bin values

    int binPick = 100; //value that holds what bin the user wants to add or delete number to
    int mathOption; // holds the binary value for if the user wants to do addition or subtraction
    int amount; // holds the value the user would like to add or subtract

    while(binPick !=0) //while loop that doesn't end till the user enters 0
    {
        //print a list of the bins names and the values they hold
        cout << "The amount of objects in each bin:    "
             << "\n" << valve.name << " " << valve.binValue
             << "\n" << bearing.name << " " << bearing.binValue
             << "\n" << coupling.name << " " << coupling.binValue
             << "\n" << cable.name << " " << cable.binValue
             << "\n" << rod.name << " " << rod.binValue;


        // user quits program or selects a bin
        cout << "\nTable of options \n  0: Quit \n  1: Valve \n  2: Bearing \n  3: Coupling \n  4: Cable \n  5: Rod \nEnter the number based on what you would like to pick: "; //prints the options the user can choose
        cin >> binPick; //takes in the value that the user enters for which bin to pick

        if (binPick == 0) //if the user enters 0 the programs ends
        {
            cout << "You have chosen to quit the program."; //tells the user why the program is about to end
            break; // the program ends
        }

        cout << "Would you like to add or subtract something the the Valve bin? \n0: Subtract \n1: Add\n"; //asks the user if they would like to add or subtract from the bins
        cin >> mathOption; //holds the value the user entered addition/subtraction

        amount = enterNumber(); //the amount is the value the user would like to add/subtract
        //the amount the item will now be with the subtraction
        if(mathOption == 0) //if the user choose 0 then the user choose subtraction
        {
            if (binPick == 1) //the user choose valve to increase
            {
                valve = RemoveParts(amount, valve); //the struct changes the value that the user wanted by subtracting
            }
            else if (binPick == 2) //the user choose bearing to increase
            {
                bearing = RemoveParts(amount, bearing); //the struct changes the value that the user wanted by subtracting
            }
            else if (binPick == 3) //the user choose coupling to increase
            {
                coupling = RemoveParts(amount, coupling); //the struct changes the value that the user wanted by subtracting
            }
            else if (binPick == 4) //the user choose cable to increase
            {
                cable = RemoveParts(amount, cable); //the struct changes the value that the user wanted by subtracting
            }
            else if (binPick == 5) //the user choose rod to increase
            {
                rod = RemoveParts(amount, rod ); //the struct changes the value that the user wanted by subtracting
            }
            else // if the user did not choose a valid option the program continues without doing subtracting
            {
                cout << "try again"; //tells the user to try again
                exit; // exits this function
            }
        }
        else if (mathOption == 1) // if the user choose 1 then the user choose addition
        {
            if (binPick == 1) //the user choose valve to increase
            {
                valve = AddParts(amount, valve); //the struct changes the value that the user wanted by addition
            }
            else if (binPick == 2) //the user choose bearing to increase
            {
                bearing = AddParts(amount, bearing); //the struct changes the value that the user wanted by addition
            }
            else if (binPick == 3) //the user choose coupling to increase
            {
                coupling = AddParts(amount, coupling); //the struct changes the value that the user wanted by addition
            }
            else if (binPick == 4) //the user choose cable to increase
            {
                cable = AddParts(amount, cable); //the struct changes the value that the user wanted by addition
            }
            else if (binPick == 5) //the user choose rod to increase
            {
                rod = AddParts(amount, rod ); //the struct changes the value that the user wanted by addition
            }
            else // if the user did not choose a valid option the program continues without doing anything
            {
                cout << "try again"; //tells the user to try again
                exit; // exits this function
            }
        }
        else //if the user did not enter 1 or 0 the number won't do anything and the program will continue
        {
            cout << "invalid number entered"; //tells the user why it's not doing anything
            continue; //has the program continue but does not do anything
        }
    }
}
