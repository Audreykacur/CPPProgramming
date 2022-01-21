//celsius to fahrenheit
/*
    Format your temperature in fixed point notation, 
    with two decimal places of precision
    Formula: F = (9/5) * C +32
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double celsius = 29.876; //To hold the Celsius temperature
    double fahrenheit;       //To hold the fahrenheit temperature

    //convert celsius to fahrenheit
    fahrenheit = 1.8 * celsius + 32;

    //Display  the fahrenheit temperature
    //cout.precision(4);
    cout << fahrenheit << endl;

    return 0;
}
