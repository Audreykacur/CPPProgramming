//
// Created by Audrey Kacur on 2/16/22.
//
/*
When an object is falling because of gravity,
the following formula can be used to determine the distance the object falls in a specific time period:

d = (1/2) * g * t^2

The variables in the formula are as follows:
d is the distance (meters)
g is 9.8
t is the amount of time (seconds) that the object has been falling.

Write a function named
    fallingDistance
        accepts an object’s falling time (in seconds) as an argument.
        return the distance, in meters, that the object has fallen during that time interval.

Write a program that demonstrates the function by calling it in a loop
that passes the values 1 through 10 as arguments and displays the return value.


*/


#include <iostream>
#include <iomanip>
using namespace std;

//constant for the force of gravity
const double G = 9.8;

//Function prototype
double fallingDistance(int);

int main()
{
    //Display the table heaadings
    cout << "Seconds\t\tDisttaance\n";
    cout << "========================\n";

    //Set the numeric output formatting
    cout << setprecision(2) << fixed <<showpoint;

    //Display the table data
    for(int seconds = 1; seconds <=10; seconds++)
    {
        //Display the seconds and distance
        cout << setw(2) << right << seconds << "\t\t"
             << setw(6) << right
             << fallingDistance(seconds)
             << " meters\n";
    }
    return 0;
}

/* The fallingDistance function returns the distance that
        a falling object falls. The time parameter is the
        number of seconds the object fell.
*/

double fallingDistance(int time)
{
    double distance = .5 * G * time * time; //d = (1/2) * g * t^2
    return distance;
}










