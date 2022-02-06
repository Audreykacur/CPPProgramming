//
// Created by Audrey Kacur on 2/6/22.
//

//This program will calculate the Body mass index
//Given a weight (pounds) and height (inches)
//Output the following once BMI is calculated:
// "You are underweight" if BMI < 18.5
// "You are overweight" if BMI > 25.0
// "your weight is optimal." if BMI is between those numbers (18.5, 25.0)

#include <iostream>
using namespace std;

int main()
{
    double weight; //weight, in pounds
    double height; //height, in inches
    double bmi;

    //Get the user's weight.
    cout << "Enter your weight in pounds: ";
    cin >> weight;

    //Get the user's height
    height = 72;

    //Caculate the BMI
    bmi  = weight/(height*height) * 703;

    //Display the BMI
    cout << "your BMI is " << bmi << endl;

    //Determine the user's weight status
    if (bmi < 18.5)
        cout << "You are underweight.\n";
    else if (bmi > 25.0)
        cout << "You are overweight.\n";
    else
        cout << "Your weight is optimal.\n";
    return 0;
}