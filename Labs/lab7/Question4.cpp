//
// Created by Audrey Kacur on 2/22/22.
//

/*
    The National Commerce Bank has hired you as a contract programmer.

    Your first assignment is to write a function that will be used by the bank’s automated teller machines (ATMs) to validate a customer’s personal identification number (PIN).

    Your function will be incorporated into a larger program that asks the customer to input his or her PIN on the ATM’s numeric keypad. (PINs are seven-digit numbers. The program stores each digit in an element of an integer vector.)

    The program also retrieves a copy of the customer’s actual PIN from a database. (The PINs are also stored in the database as seven element vector.) If these two numbers match, then the customer’s identity is validated. Your function is to compare the two vectors and determine whether they contain the same numbers.
 */

//ATM PIN Confirmation
#include <iostream>
#include <vector>
using namespace std;

//Function Prototype
bool testPIN(vector<short>, vector<short>);

int main()
{
    vector<short> pin1(7); //Base set of values
    vector<short> pin2(7); //Only 1 element will be different from pin1
    vector<short> pin3(7); //All elements will be different from pin1

    //Initilize the pin1 vector
    pin1[0] = 2;
    pin1[1] = 4;
    pin1[2] = 1;
    pin1[3] = 8;
    pin1[4] = 7;
    pin1[5] = 9;
    pin1[6] = 0;

    //Initialize the pin2 vector
    pin2[0] = 2;
    pin2[1] = 4;
    pin2[2] = 1;
    pin2[3] = 8;
    pin2[4] = 7;
    pin2[5] = 9;
    pin2[6] = 0;

    //Initialize the pin3 vector
    pin3[0] = 1;
    pin3[1] = 2;
    pin3[2] = 3;
    pin3[3] = 4;
    pin3[4] = 5;
    pin3[5] = 6;
    pin3[6] = 7;

    if (testPIN(pin1, pin2))
        cout << "ERROR: pin1 and pin2 report to be the same. \n";
    else
        cout << "SUCCESS: pin1 and pin2 are different.\n";

    if(testPIN(pin1, pin3))
        cout << "ERROR: pin1 and pin3 report to be the same. \n";
    else
        cout << "SUCCESS: pin1 and pin3 are different.\n";

    if (testPIN(pin1, pin1))
        cout << "SUCCESS: pin1 and pin1 report to be the same.\n";
    else
        cout << "ERROR: pin1 and pin1 are different.\n";

    return 0;
}

/*
    The testPIN function accepts two short vectors. The vectors are compared.
    If they contain different values, false is returned.
 */
bool testPIN(vector<short> vect1, vector<short> vect2)
{
    if (vect1 == vect2) return true;
    else return false;
}

