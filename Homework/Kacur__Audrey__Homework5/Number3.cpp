// Created by Audrey Kacur on 2/6/22.

//Student line up

/*
A teacher has asked all her students to line up single file according to their first name.
For example, in one class Amy will be at the front of the line and Yolanda will be at the end.

then loops to read that many names.
Once all the names have been read it reports which student would be at the front of the line and which
one would be at the end of the line. You may assume that no two students have the same name.
Input Validation: Do not accept a number less than 1 or greater than 25 for the number of students.
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string first, name, last;
    first = "{"; // first name of the alphabet
    last = "@"; //last place in the alphabet
    int play = 0; //place holder variable

    int amountOfNames; //hold the number of students that the teacher inputs
    cout << "Enter the number of students you have between 1 - 25: "; //Asks user for student amount
    cin >> amountOfNames; //holds the number of students

    while (amountOfNames < 1 || amountOfNames > 25) //does not allow the student input to be less than 1 or greater than 25
    {
        cout << "The number you have entered is invalid! \n Please enter a number between 1 - 25: ";
        cin >> amountOfNames; //intakes user input
    }
    for (int x = 0; x < amountOfNames; x++)     //loops for however many students were entered
    {
        cout << "Please enter a name: ";
        cin >> name;    //intakes the students name

        if (name[0] > 96) name[0] = name[0]- 32;    //changes all lowercase first letters to uppercase first letters

        if (name[0] < first[0]) first = name;       //if the name comes alphabetically before the current first name, the first name takes the entered names value

        else if(first[0] == name[0]) //if the first letter equals each other
        {
            for(int x = 0; x < sizeof(name); x++) //run through the whole name
            {
                if (name[x] < first[x]) //if entered name if alphabetically first this runs
                {
                    first = name; //first takes on the value of name
                    x = x+1;
                    goto LOOP; //jumps to "LOOP"
                }
                else if (name[x] > first[x]) //if it comes here the loop needs to break because the first name is still first
                {
                    x = x+1;
                    goto LOOP; //jumps to "LOOP"
                }
                else continue; //if letters equal each other for loop continues
            }
            break;
        }

        if (last[0] < name[0])  last = name; //if the name entered is lower alphabetically than the current last name

        else if(last[0] == name[0]) //if the name entered has the same first initial as the current last name
        {
            for(int x = 0; x < sizeof(name); x++)
            {
                if (name[x] > last[x]) //runs if the name entered comes after the current last name
                {
                    last = name; //last name takes on the value of name entered
                    x = x+1;
                    goto LOOP; //jumps to "LOOP"
                }
                else if (name[x] < last[x]) //if it comes here the loop needs to break because the last name is still last
                {
                    x = x+1;
                    goto LOOP; //jumps to "LOOP"
                }
                else continue; //if the letters are equal continue the for loop
            }
            break;
        }
        LOOP:
        play++;// place holder
    }
    cout << "The first name is " << first << endl; //displays the first alphabetical name
    cout << "The last name is " << last << endl; //displays the last alphabetical name
    return 0;
}