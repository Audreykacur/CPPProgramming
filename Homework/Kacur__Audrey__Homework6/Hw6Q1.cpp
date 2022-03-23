//
// Created by Audrey Kacur on 2/16/22.
//

/*

1. Kinetic Energy

In physics, an object that is in motion is said to have kinetic energy. The following formula can be used to
determine a moving object’s kinetic energy:

𝑲E = (1/2)mv^2

The variables in the formula are as follows: KE is the kinetic energy, m is the object’s mass in kilograms,
and v is the object’s velocity, in meters per second.

Write a function named kineticEnergy that accepts an object’s mass (in kilograms) and velocity (in meters
per second) as arguments.

The function should return the amount of kinetic energy that the object has. Demonstrate the function by
calling it in a program that asks the user to enter values for mass and velocity.

 */

#include <iostream>
using namespace std;

double kineticEnergy(double mass, double velocity) // that accepts an object’s mass (in kilograms) and velocity (in meters per second) as arguments.
{
    //The function should return the amount of kinetic energy that the object has.
    return(.5 * mass * velocity * velocity); //kinetic Energy = (1/2)mv^2
}

//Demonstrate the function by calling it in a program that asks the user to enter values for mass and velocity.
int main()
{
    double m; //Mass in kilograms
    double v; //velocity (meters/second)

    cout << "Enter the mass: ";
    cin >> m;

    cout << "Enter the velocity: ";
    cin >> v;

    cout << "The kinetic energy of this object is: " << kineticEnergy(m, v); //outputs the amount of kinetic energy
}
