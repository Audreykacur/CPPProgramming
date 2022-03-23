//
// Created by Audrey Kacur on 2/6/22.
//

//Days in a month
/*

 Write a program that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12) and the year.
 The program should then display the number of days in that month.

    Use the following criteria to identify leap years:
    1. Determine whether the year is divisible by 100.
        If it is, then it is a leap year if and only if it is divisible by 400.
        For example, 2000 is a leap year but 2100 is not.
    2. If the year is not divisible by 100, then it is a leap year if and if only it is divisible by 4.
        For example, 2008 is a leap year but 2009 is not.

 */



#include <iostream>
using namespace std;

int main()
{
    int month, year; //Variables to hold the user input

    cout << "Please enter the number of the month you would like to select: \n"
        << "1. January \n"
        << "2. February \n"
        << "3. March \n"
        << "4. April \n"
        << "5. May \n"
        << "6. June \n"
        << "7. July \n"
        << "8. August \n"
        << "9. September \n"
        << "10. October \n"
        << "11. November \n"
        << "12. December \n";
    cin >> month;

    cout << "Please enter the year _ _ _ _\n";
    cin >> year;

    //Display how many days are in the month selected
    switch(month)
    {
        case 1:
            cout << "January has 31 days.";
            break;
        case 2:
            //determine if it is a leap year or not and find how many days arer in that month
            if ((year%100 = 0) && (year%400 = 0 )) cout << "February has 29 days.";
            else if ((year%100 != 0) && (year%4 = 0)) cout << "February has 29 days.";
            else cout << "February has 28 days.";
            break;
        case 3:
            cout << "March has 31 days.";
            break;
        case 4:
            cout << "April has 30 days.";
            break;
        case 5:
            cout << "May has 31 days.";
            break;
        case 6:
            cout << "June has 30 days.";
            break;
        case 7:
            cout << "July has 31 days.";
            break;
        case 8:
            cout << "August has 31 days.";
            break;
        case 9:
            cout << "September has 30 days.";
            break;
        case 10:
            cout << "October has 31 days.";
            break;
        case 11:
            cout << "November has 30 days.";
            break;
        case 12:
            cout << "December has 31 days.";
            break;
        default:
            cout << "Number is invalid";
            break;
    }


}