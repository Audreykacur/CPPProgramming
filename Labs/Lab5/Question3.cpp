//
// Created by Audrey Kacur on 2/6/22.
//
/*
    Write a program with a loop that lets the user enter a series of integers.

    The user should enter −99 to signal the end of the series.
    After all the numbers have been entered,
    the program should display the largest and smallest numbers entered.
 */
// The greatest and least of these

#include <iostream>
using namespace std;

int main()
{
    int num,    //to hold a number
    greatest,   //to hold the largest value
    least;     //to hold the smallest value

    //Explain what we are doing
    cout << "You will enter a series of integers and \n"
         << "I will then tell you the largest and \n"
         << "the smaallest numbers you entered.\n"
         << "Enter -99 to terminate the series. \n\n";

    //Ask the user to enter the first number.
    cout << "Enter an integer (-99 to quit):";
    cin >> num;

    //The first number is both the greeatest and the smallest number entered
    greatest = num;
    least = num;

    //Get the rest of the numbers until the user enters -99 to quit
    while (num != -99)
    {
        //Get the next integer
        cout << "Enter another integer (-99 to quit): ";
        cin >> num;

        //If the user did not enter -99, then see whether this number
        //is now the greatest or the least number entered so far.

        if (num != -99)
        {
            if(num > greatest) greatest = num;
            if(num < least) least = num;

        }
    }

    //Display the results
    cout << "\nThe greatest number you entered is " << greatest << ".\n";
    cout << "The least number you entered is " << least << ".\n\n";

    return 0;

}