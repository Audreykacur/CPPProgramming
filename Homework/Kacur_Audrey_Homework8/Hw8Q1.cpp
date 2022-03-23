//
// Created by Audrey Kacur on 3/16/22.
//

/*
    1. Lottery Winners
    A lottery ticket buyer purchases 10 tickets a week, always playing the same 10 5-digit “lucky” combinations.

    Write a program that initializes an array or a vector with these numbers and then lets the player enter this week’s winning 5-digit number.

    The program should perform a linear search through the list of the player’s numbers and report whether or not one of the tickets is a winner this week.
    Here are the numbers: 13579 26791 26792 33445 55555 62483 77777 79422 85647 93121
 */

//Lottery Winner
#include <iostream>
using namespace std;

void linearSearchBench(long values[], int size, int value) {
    bool found = false; //The found flag, initialized to false
    int  comparisons = 0; //To hold the number of comparisons
    int index = 0; //To hold the array index

    // Search while the value has not been found and the index is still in the array bounds
    while(!found && index < size) {
        comparisons++;
        if (value == values[index]) {
            found = true;
            cout << "The winning ticket number was found!";
        }
        index ++;
    }
    if (!found) cout << "The winning ticket number was not found :(";
}

int main() {
    long winner;
    //initializes a 10 integer array
    long array [10] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    cout << "Please enter this weeks winning number: ";
    cin >> winner;
    linearSearchBench(array, 10, winner);
}