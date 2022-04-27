
// Created by Audrey Kacur on 4/6/22.

/*
    Modify the program that you wrote for the previous problem, so it defines an enumerated data type with enumerators for the months (JANUARY, FEBRUARY, etc.).

    The program should use the enumerated type to step through the elements of the array.
 */

//Weather Statistics Modification using Enum
#include <iostream>
using namespace std;

//Constant for the number of months
const int NUM_MONTHS = 12;

//Declaration of the WeatherInfo structure
struct WeatherInfo
{
    double rain;        //total rainfall
    double high;        //High temperature
    double low;         //Low temperature
    double averageTemp; //Average temperature
};

//Enumerated type for the months
enum Month { JANUARY, FEDRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMEBER, OCTOBER, NOVEMBER, DECEMBER };

int main()
{
    //Create an array of WeatherInfo structures
    WeatherInfo year[NUM_MONTHS];

    //Enum variable to use in the loop
    Month month;

    //Get the weather data for each month
    cout << "Enter the following information:\n";
    for(month = JANUARY; month <= DECEMBER; month = static_cast<Month>(month+1))
    {
        //Get the rainfall
        cout << "Month " << (month +1) << endl;
        cout << "\tTotal Rainfall: ";
        cin >> year[month].rain;

        //Get the high temperature.
        cout << "\tHigh temperature: ";
        cin >> year[month].high;

        //Validate the high temperature
        while(year[month].high < -100 || year[month].high > 140)
        {
            cout << "ERROR: Temperature must be in the range "
                 << "of -100 through 140.\n";
            cout << "\t High Temperature: ";
            cin >> year[month].high;
        }

        //Get the low temperature and validate
        cout << "\tLow Temperature: ";
        cin >> year[month].low;

        //Validate the low temperature
        while(year[month].low < -100 || year[month].low > 140)
        {
            cout << "ERROR: Temperature must be in the range "
                 << "of -100 through 140.\n";
            cout << "\tLow Temperature: ";
            cin >> year[month].low;
        }

        //Calculate the average temperature
        year[month].averageTemp = (year[month].high + year[month].low) / 2.0;
    }
    //Calculate total annual rainfall using the enumerated data type
    double totalRain = 0;
    for(month = JANUARY; month <= DECEMBER; month = static_cast<Month>(month+1))
    {
        totalRain += year[month].rain;
    }

    //Calculate average monthly rainfall
    double aveMonthRain = totalRain / NUM_MONTHS;

    //Calculate the average monthly average temperature usinf the enumerated data type
    double aveTotal = 0;
    double aveAve = 0;

    for(month = JANUARY; month <= DECEMBER; month = static_cast<Month>(month+1))
    {
        aveTotal += year[month].high;
        aveTotal += year[month].low;
    }
    aveTotal = aveTotal / 2;

    aveAve = aveTotal / NUM_MONTHS;

    //Find the highest & lowest temperatures
    double highest, lowest, highMonth = 0, lowMonth = 0;
    highest = year[0].high;
    lowest = year[0].low;

    for(month = JANUARY; month <= DECEMBER; month = static_cast<Month>(month+1))
    {
        if (year[month].high > highest)
        {
            highest = year[month].high;
            highMonth = month;
        }

        if (year[month].low < lowest)
        {
            lowest = year[month].low;
            lowMonth = month;
        }
    }

    //Display findings
    cout << "\nTotal rainfall: " << totalRain << endl;
    cout << "Average Monthly Rain: " << aveMonthRain << endl;
    cout << "Average Monthly Average Temperature: " << aveAve << endl;
    cout << "Highest Temperature: " << highest;
    cout << "   (Month " << (highMonth +1) << ")\n";
    cout << "Lowest Temperature: " << lowest;
    cout << "   (Month " << (lowMonth + 1) << ")\n\n";

    return 0;

}