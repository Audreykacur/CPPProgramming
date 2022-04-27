// Created by Audrey Kacur on 3/30/22.

/*
    Write a program that accepts as input a sentence in which all of the words are run together,
    but the first character of each word is uppercase.



    For example: the string "StopAndSmellTheRoses." would be converted to "Stop and smell the roses."
 */

//Word Separator
#include <iostream>
#include <string>
using namespace std;

//Prototype
string format(string);

int main()
{
    string input; //To hold the user's input

    //Get a sentence from the user
    cout << "Enter a sentence with no spaces between the words\n"
         << "and the first letter of each word capitilized.\n"
         <<"Example: StopAndSmellTheRoses\n"
         << ": ";
    cin >> input;
    //Display the formatted sentence
    cout << format(input) << endl;
    return 0;
}

/*
    The format function seperates the words in the sentence and changes the first character of each word
    (except the first) to lowercase
*/
string format(string sentence)
{
    // The following loop steps through each character in sentence, starting wwith the 2nd character
    for (int i = 1; i < sentence.size(); i++)
    {
        if(isupper(sentence[i])) //If this character is uppercase, then change it to lower case and insert a space before it
        {
            cout << sentence[i] << endl;  //prints the uppercase letter that its on
            i--; //decrements the position in the string it is in so it will insert the "space" before the uppercase letter
            sentence.insert((i+1)," "); //inserts the uppercase letter
            i++;
            i++;
        }

    }
    return sentence; //Return the formatted result
}