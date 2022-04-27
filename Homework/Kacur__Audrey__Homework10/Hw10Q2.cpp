//
// Created by Audrey Kacur on 3/30/22.
//

/*
2. Date Printer
Write a program that reads a string from the user containing a date in the form mm/dd/yyyy.
It should print the date in the form March 12, 2014.

 */

#include <iostream>
#include <cstring>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    string givenDate;

    //reads a string from the user containing a date in the form mm/dd/yyyy.
    cout << "Please enter a date in the form mm/dd/yyyy" << endl;
    cin >> givenDate;



    string month = givenDate.substr(0,2);
    string day = givenDate.substr(3,3);
    day.pop_back();
    //day.pop_back();
    string year = givenDate.substr(6,7);

    if (month == "01") month = "January";
    if (month == "02") month = "February";
    if (month == "03") month = "March";
    if (month == "04") month = "April";
    if (month == "05") month = "May";
    if (month == "06") month = "June";
    if (month == "07") month = "July";
    if (month == "08") month = "August";
    if (month == "09") month = "September";
    if (month == "10") month = "October";
    if (month == "11") month = "November";
    if (month == "12") month = "December";

    cout << "The given date is: " << month << " " << day << ", " << year;

}





















