//
// Created by Audrey Kacur on 3/30/22.
//

/*
1. Sentence Capitalizer
Write a function that accepts a pointer to a C-string as an argument and capitalizes the first character of each sentence in the string.

For instance, if the string argument is “ hello. my name is Joe. what is your name?” the function
should manipulate the string so it contains “ Hello. My name is Joe. What is your name?”
Demonstrate the function in a program that asks the user to input a string and then passes it to the function.
The modified string should be displayed on the screen.
 */

#include <iostream>
#include <cstring>
#include <string>
#include <ctype.h>
using namespace std;

int stringToCapitalize(char *sentences, int size) // accepts a pointer to a C-string as an argument and capitalizes the first character of each sentence in the string.
{
    *sentences = toupper(*sentences); //capitalizes the first letter of the sentence
    /
    for (int i = 0; i < size; i++) //loop to run through all the characters
    {
        if (*sentences == '.') //if the pointer is pointing to a period
        {
            sentences++; //increases right by one character
            sentences++; //increases right by one character
            *sentences = toupper(*sentences); // increases the letter of the first sentences
        }
        sentences++; //increases right by one character
    }
    return 0;
}

int main()
{
    string sentences; // makes a string named sentences that holds the string that a user enters

    cout << "Please enter a string with all lowercase letters." << endl; // asks the user to input a string
    getline(cin, sentences);

    stringToCapitalize(&sentences[0], sentences.length()); // calls the function and passes the string to the function

    cout << sentences << endl; // Display the uppercased string to the User

    return 0;

}

