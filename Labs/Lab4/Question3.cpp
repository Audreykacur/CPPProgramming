//
// Created by Audrey Kacur on 2/6/22.
//
/*
    The colors red, blue, and yellow are known as the primary colors because
        they cannot be made by mixing other colors.
    When you mix two primary colors, you get a secondary color, as shown here:
        When you mix red and blue, you get purple.
        When you mix red and yellow, you get orange.
        When you mix blue and yellow, you get green.

    Write a program that prompts the user to enter the names of two primary
    colors to mix. If the user enters anything other than “red,” “blue,” or “yellow,”
    the program should display an error message.
    Otherwise, the program should display the name of the secondary color
    that results by mixing two primary colors.
 */

//color mixer
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Constants for the color names
    const string RED = "red";
    const string BLUE = "blue";
    const string YELLOW = "yellow";

    //Variables to hold the colors input by the user
    string color1; //The name of the first color
    string color2; //The name of the second color

    cout << "The primary colors are red, blue, and yellow.\n";
    cout << "Which two primary colors do you want to mix?\n\n";

    //Get first color from the user
    cout << "Enter the first primary color in lower case letters: ";
    cin >> color1;

    //Get second color from the user
    cout << "Enter the second primary color in lower case letters: ";
    cin >> color2;

    //Check validity of the first color
    if (color1 != RED && color1 != BLUE && color1 != YELLOW)
        cout << "\n Error: The first color you entered is invalid. \n\n";
    //Check validity of the second color
    else if (color2 != RED && color2 != BLUE && color2 != YELLOW)
        cout << "\n Error: The second color you entered is invalid. \n\n";
    //Check if the two colors are the same
    else if (color1 == color2)
        cout << "\nError: The two colors you entered are the same.\n\n";
    //Display the secondary color resulting from mixing the two colors
    else
    {
        if (color1 == RED && color2 == BLUE)
            cout << "\n The resulting secondary color is Purple.\n\n";
        else if (color1 == BLUE && color2 == RED)
            cout << "\n The resulting secondary color is Purple.\n\n";
        else if (color1 == RED && color2 == YELLOW)
            cout << "\n The resulting secondary color is Orange.\n\n";
        else if (color1 == YELLOW && color2 == RED)
            cout << "\n The resulting secondary color is Orange.\n\n";
        else if (color1 == YELLOW && color2 == BLUE)
            cout << "\n The resulting secondary color is Green.\n\n";
        else
            cout << "\n The resulting secondary color is Green.\n\n";
    }
    return 0;
}
