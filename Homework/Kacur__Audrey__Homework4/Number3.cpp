//
// Created by Audrey Kacur on 2/6/22.
//

//Geometry Calculator
#include <iostream>
using namespace std;

int main() {
    //variables

    int GCNum; // Holds the number that the user want to perform for the Geometry Calculator

    double r; // Holds the value entered for the radius (no negative values)
    double PI = 3.14159; //Constant Variable for pi
    double area; // Holds the value of the area
    double length, width; // Holds the values entered for the rectangle or triangle (no negatives)
    double height; // Holds the value entered for a triangles height (no negatives)
/*

    Write a program that displays the following menu:
        Geometry Calculator
            1. Calculate the Area of a Circle
            2. Calculate the Area of a Rectangle
            3. Calculate the Area of a Triangle
            4. Quit
*/
    cout << "Enter the number you would like to perform:"
         <<  "Geometry Calculator\n"
         <<  "            1. Calculate the Area of a Circle\n"
         <<  "            2. Calculate the Area of a Rectangle\n"
         <<  "            3. Calculate the Area of a Triangle\n"
         <<  "            4. Quit\n";
    //Enter your choice (1-4):
    cin >> GCNum;


    if (GCNum == 1) //If the user enters 1
    {
        cout << "Enter the radius: "; //ask for the radius of the circle
        cin >> r;
        while (r < 0)
        {
            cout << "Please re-enter a positive number for the circles radius: ";
            cin >> r;
        }
        //Display the circle area (area = pi*r*r)
        area = PI * r * r;
        cout << "The area of the circle is " << area << ".\n";

    }
    else if (GCNum == 2) //If the user enters 2
    {
        cout << "What is the length of the rectangle?"; //ask for the length and width of the rectangle
        cin >> length;
        while (length < 0)
        {
            cout << "Please re-enter a positive number for the circles radius: ";
            cin >> length;
        }
        cout << "What is the width of the rectangle?";
        cin >> width;
        while (width < 0)
        {
            cout << "Please re-enter a positive number for the circles radius: ";
            cin >> width;
        }

        //display the rectangle’s area (area = length * width)
        area = length * width;
        cout << "The area of the rectangle is " << area << ".\n";
    }
    else if (GCNum == 3) //If the user enters 3
    {
        cout << "What is the length of the triangles base?"; //ask for the length of the triangle’s base
        cin >> length;
        while (length < 0)
        {
            cout << "Please re-enter a positive number for the circles radius: ";
            cin >> length;
        }
        cout << "What is the height of the triangle?"; //ask for the height of the triangle
        cin >> height;
        while (height < 0)
        {
            cout << "Please re-enter a positive number for the circles radius: ";
            cin >> height;
        }

        //display the triangle's area (area = base * height * .5)
        area = length * height * .5;
        cout << "The area of the rectangle is " << area << ".\n";

    }
    else if (GCNum == 4) //If the user enters 4
    {
        //The program should end
        return 0;
    }
        // Input Validation: Display an error message if the user enters a number outside the range of 1 through 4 when selecting an item from the menu.
    else
        cout << "The value entered is outside the range of 1 through 4 and is not allowed when selecting an item from the menu";
    return 0;
}