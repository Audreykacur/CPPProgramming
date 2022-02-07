//
// Created by Audrey Kacur on 2/6/22.
//

//Ocean levels

/*
 Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that
displays a table showing the number of millimeters that the ocean will have risen each year for the next
25 years.
 */

#include <iostream>
using namespace std;

int main()
{
    int risenPerYear = 1.5; //amount of millimeters the ocean rises per year
    cout << "   Year            Millimeters Risen\n";

    for (int x = 0; x < 25; x++)
    {
        cout << "    " << x << "                 " << (risenPerYear * x +1.5 ) << endl;
    }

};