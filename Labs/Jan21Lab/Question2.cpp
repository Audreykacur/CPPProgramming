//Seconds Conversion
/*
This program will use the number of seconds to convert to minutes,
hours, days, months, and years. The output should be formatted 
with each conversion on a seperate line

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long seconds = 123456789;
    double minutes, hours, days, months, years;

    minutes = seconds / 60;

    hours = minutes / 60;

    days = hours / 24;

    years = days / 365;

    months = years * 12;

    cout << setprecision(4) << fixed << showpoint << right;

    cout << "Minutes: " << setw(6) << minutes << endl;

    //repeat the same for hours, days, months, and years
    cout << "hours: " << setw(6) << hours << endl;
    cout << "days: " << setw(6) << days << endl;
    cout << "months: " << setw(6) << months << endl;
    cout << "years: " << setw(6) << years << endl;
    return 0;
}