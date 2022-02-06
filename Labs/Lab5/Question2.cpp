//
// Created by Audrey Kacur on 2/6/22.
//

/*
    Write a program that asks the user for a positive integer value.
        The program should use a loop to get the sum of all the integers from 1 up to the number entered.
    For example, if the user enters 50, the loop will find the sum of 1, 2, 3, 4, … 50.
    Input Validation: Do not accept a negative starting number.
 */

//sum of Numbers
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int value; // to hold the value
    int sum = 0; // the sum, initialized to 0

    //get the value as input from the user.
    //do not accept negative values
    do {
        cout << "Enter a positive integer value: ";
        cin >> value;
    } while (value < 0);

    //Calculate the sum of numbers from 1 up to the value entered by the user using a for loop
    for(int x = 1; x < value+1; x++)
    {
        sum += x;
    }

    //Display the sum
    cout << "\nThe sum of numbers 1 - " << value << " is " << sum << ".\n";
    return 0;
}