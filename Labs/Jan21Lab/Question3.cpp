//Test Average
/*
The program should calculate the average test score and display it. 
The number displayed should be formatted in fixed-point notation,
with one decimal point of precision.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //constants
    const double NUM_TESTS = 3;

    //variabels
    double testScore1 = 89.42;  //to hold the first place of the test score
    double testScore2 = 96;     //to hold the second test score
    double testScore3 = 55.487; //to hold the third test score
    double testScoreAvg;

    //calculate the test score average.
    testScoreAvg = (testScore1 + testScore2 + testScore3) / 3;
    cout.precision(4);

    //Display the result
    cout << "\nThe test score average is " << testScoreAvg << endl;
}