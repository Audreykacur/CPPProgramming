
// Created by Audrey Kacur on 4/6/22.

/*
1. Movie Data
Write a program that uses a structure named MovieData to store the following information about a movie:
    Title
    Director
    Year Released
    Running Time (in minutes)

The program should create two MovieData variables, store values in their members, and pass each one, in turn,
to a function that displays the information about the movie in a clearly formatted manner.
 */

#include <iostream>
using namespace std;

struct MovieData //uses a structure named MovieData
{
    string Title;
    string Director;
    int year;           //Year Released
    int RunningTime; //Running Time (in minutes)
};

//displays the information about the movie in a clearly formatted manner
void function (MovieData movie[]) //pass MovieData variable
{
    for (int x = 0; x < 2; x++)
    {
        cout << "      Movie" << endl;
        cout << "   " << movie[x].Title << endl;
        cout << "Director: : " << movie[x].Director << endl;
        cout << "Year released: " << movie[x].year << endl;
        cout << "Length (minutes): " << movie[x].RunningTime << "\n" << endl;
    }
}

int main()
{
    MovieData movie[2] = {
            {"Infinity War", "Joe Russo", 2018, 149},
            {"Lord of the rings", "Peter Jackson", 2001, 178},
    };
    function(movie);
    //The program should create two MovieData variables,
    // store values in their members, and pass each one, in turn, to function
}