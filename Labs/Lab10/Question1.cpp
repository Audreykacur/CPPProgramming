// Created by Audrey Kacur on 3/30/22.

/*
    Write a function that accepts a pointer to a C-string as an argument and displays its contents backward
    For instance, if the string argument is "Gravity" the function should display "ytivarG"
    Demonstrate the function in the program that asks the user to input a string and then passes it to the function
 */



//Chapter 10; Programming Challenging 2: Backward String
#include <iostream>
#include <cstring>
using namespace std;

//Function Prototype
void backward(char *);

int main()
{
    const int SIZE = 81; //The maximum size of the string
    char string[SIZE];

    //get a string from the user.
    cout << "Enter a string of 80 or fewer characters: \n";
    cin.getline(string, SIZE);

    //Display the string backward
    cout << "\nYou entered: \n" << string << endl;
    cout << "\nBackward, that string is:\n";
    backward(string);
    cout << endl << endl;

    return 0;
}

//The backward function accepts a pointer to a C-string as its argument, and display the string backward

void backward(char *str)
{
    int len = strlen(str);
    char string[len];
    for (int i = 1; i < len; i++)
    {
        str++;
    }

    for (int i = 0; i < len; i++)
    {
        string[i] = *str;
        str--;
    }

    cout << string << endl; //print the backwards string here
}




























