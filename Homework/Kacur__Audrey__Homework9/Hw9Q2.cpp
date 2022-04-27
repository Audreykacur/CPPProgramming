// Created by Audrey Kacur on 3/23/22.

/* 2. Pointer Rewrite
The below function uses reference variables as parameters.
Rewrite the function so it uses pointers instead of reference variables, and then demonstrate the function in a complete program.

 int doSomething(int &x, int &y)
{
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y;
}
*/

#include <iostream>
using namespace std;

int doSomething(int *x, int *y)
{
    //The below function uses reference variables as parameters.
    //Rewrite the function so it uses pointers instead of reference variables,
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}

int main()
{
    int variableName, variableName2;
    int *x;
    int *y;

    cout << "Please enter a x value that you would like to multiply: ";
    cin >> variableName;
    x = &variableName;

    cout << "Please enter a y value that you would like to multiply: ";
    cin >> variableName2;
    y = &variableName2;

    cout << "The mathematical equations equal: (y*10) + (x * 10) = " << doSomething(x, y) << endl;
}

