//
// Created by Audrey Kacur on 2/6/22.
//

//Roman Numeral Converter
/*
 * Write a program that asks the user to enter a number within the range of 1 through 10. Use a switch
statement to display the Roman numeral version of that number.
Input Validation: Do not accept a number less than 1 or greater than 10.
 *
 */


#include <iostream>
using namespace std;

int main()
{
    int decimalNum; // Stores the number 1 - 10 the user enters
    cout << "Enter a number within 1 - 10: \n";
    cin >> decimalNum;

    switch(decimalNum)
    {
        case 1:
            cout << "The Roman Numeral of 1 is I ";
            break;
        case 2:
            cout << "The Roman Numeral of 2 is II ";
            break;
        case 3:
            cout << "The Roman Numeral of 3 is III ";
            break;
        case 4:
            cout << "The Roman Numeral of 4 is IV ";
            break;
        case 5:
            cout << "The Roman Numeral of 5 is V ";
            break;
        case 6:
            cout << "The Roman Numeral of 6 is VI ";
            break;
        case 7:
            cout << "The Roman Numeral of 7 is VII ";
            break;
        case 8:
            cout << "The Roman Numeral of 8 is VIII ";
            break;
        case 9:
            cout << "The Roman Numeral of 9 is IX ";
            break;
        case 10:
            cout << "The Roman Numeral of 10 is X ";
            break;
        default:
            cout << "Number is invalid";
            break;
    }
}