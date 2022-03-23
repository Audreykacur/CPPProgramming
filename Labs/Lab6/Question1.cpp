//
// Created by Audrey Kacur on 2/16/22.
//

//Given numbers x, y, and target, return whichever of x and y is closer to the target.
//If they have the same distance, return the smaller of the two.

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

double closerToTarget(double x, double y, double target)
{
    double  newX = abs(target - x);
    double  newY = abs(target - y);

    if (newX < newY)  return x;
    else if (newX > newY) return y;
    else //if the numbers aree the same distance apart
    {
        if (x< y) return x;
        else if (x>y) return y;
        else return x;
    }
}

int main()
{
    double Target, X, Y;
    cout<<"Hello user! \nPlease enter the target number: "<< endl;
    cin>> Target;

    cout<< "Please enter a number for X: " << endl;
    cin >> X;

    cout<< "Please enter a number for Y: " << endl;
    cin >> Y;

    cout<< "The target number is " << Target << ". The number closer to this target is " << closerToTarget(X, Y, Target);
    return 0;
}
