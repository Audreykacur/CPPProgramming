// Average of values

/*
Complete the below program that finds the average of the below 5 values.

The program should first calculate and store the sum.

Then the program should divide the stored value by 5 to calculate the average
*/

#include <iostream>
using namespace std;

int main()
{

    // store the values
    double value1 = 28;
    double value2 = 32;
    double value3 = 37;
    double value4 = 24;
    double value5 = 33;

    // calculate and store the sum
    double sum = value1 + value2 + value3 + value4 + value5;

    // calculate and store the average
    double average = sum / 5;

    // Display the average on the screen
    cout << average << endl;
    return 0;
}