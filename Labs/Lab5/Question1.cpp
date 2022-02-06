//
// Created by Audrey Kacur on 2/6/22.
//

//Square Display
#include <iostream>
using namespace std;

int main()
{
    int num;
    //get a positive integer in the range of 1 - 15
    cout << "Enter a positive integer in the range "
        << "of 1 - 15: ";
    cin >> num;

    // Validate the input
    while (num < 1 || num > 15)
    {
        cout << "ERROR: Invalid number. \n";
        cout << "Enter a positive integer in the range of 1 - 15: ";

        cin >> num;
    }

    //Display the square made of X's
    //The outer loop displays the rows.
    for (int row = 0; row < num; row++) {
        // the inner loop displays each X in the row
        for (int column = 0; column < num; column++)
            cout << "X";
        //Display a newline at the end of the row.
        cout << endl;
    }
    return 0;
    }

    //
}

