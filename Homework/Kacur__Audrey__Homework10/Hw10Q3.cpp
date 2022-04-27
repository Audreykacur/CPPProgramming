// Created by Audrey Kacur on 3/30/22.

/*

3. Sum of Digits in a String
Write a program that asks the user to enter a series of single digit numbers with nothing separating them.
Read the input as a C-string or a string object.
The program should display the sum of all the single-digit numbers in the string.
For example, if the user enters 2514, the program should display 12, which is the sum of 2, 5, 1, and 4.
The program should also display the highest and lowest digits in the string.
 */


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string numbers;
    int sum = 0;
    string num;
    cout << "Please enter a series of single digit numbers with nothing separating them" << endl; //asks the user to enter a series of single digit numbers with nothing separating them.
    cin >> numbers; //Read the input as a C-string or a string object.


    for(int i = 0; i < numbers.length(); i++)
    {
        num = numbers[i];

        sum += stoi(num);

    }

    cout << sum << endl;

    //The program should display the sum of all the single-digit numbers in the string.
    //The program should also display the highest and lowest digits in the string.

}











