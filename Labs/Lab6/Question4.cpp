//
// Created by Audrey Kacur on 2/16/22.
//

/*

Write a program that calculates the average of a group of test scores, where the lowest score in the group is dropped. It should use the following functions:

void getScore() should ask the user for a test score, store it in a reference parameter variable, and validate it. This function should be called by main once for each of the five scores to be entered.
void calcAverage() should calculate and display the average of the four highest scores. This function should be called just once by main and should be passed the five scores.
int findLowest() should find and return the lowest of the five scores passed to it. It should be called by calcAverage, which uses the function to determine which of the five scores to drop.
Input Validation: Do not accept test scores lower than 0 or higher than 100.


*/

//Lowest score drop
#include <iostream>
using namespace std;

//Function prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
    int score1; // to hold the 1st test score
    int score2; // to hold the 2nd test score
    int score3; // to hold the 3rd test score
    int score4; // to hold the 4th test score
    int score5; // to hold the 5th test score

    //get the five test scores
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    //Calculate and display the test score average, after dropping the lowest score
    calcAverage(score1, score2, score3, score4, score5);

    return 0;

}

/*

    The getScore function aasks the user for a test score, stores it in a reference
    paramettter variable, and validates it

*/

void getScore(int &score)
{
    //Ask the user for a test score
    cout << "Enter a test score: ";
    cin >>score;

    //Validate the score
    while ( (score > 100) || (score < 0) )
    {
        cout << "Enter a test score between 0 and 100: ";
        cin >>score;
    }

}

/*
    The calcAverage function calculates and displays the average of the
    four highest scores
*/


void calcAverage(score1, score2, score3, score4, score5)
{
    //get the lowest score
    int lowest = findLowest(score1, score2, score3, score4, score5);
    int total, average;

    average = (score1 + score2 + score3 + score4 + score5 - lowest)/4;

    //Display the average
    cout << "After dropping the lowest score, "
         << "The test average is "
         << average << ".\n";
}

//the findLowest function finds and returns the lowest of tthe five scores passed to it
int findLowest(score1, score2, score3, score4, score5)
{
    int lowest; //to hold the lowest score

    //Determine the lowest of the five scores.
    if ((score1 < score2) && (score1 < score3) && (score1 < score4) && (score1 < score5)) return score1;

    if ((score2 < score1) && (score2 < score3) && (score2 < score4) && (score2 < score5)) return score2;

    if ((score3 < score1) && (score3 < score2) && (score3 < score4) && (score3 < score5)) return score3;

    if ((score4 < score1) && (score4 < score2) && (score4 < score3) && (score4 < score5)) return score4;

    if ((score5 < score1) && (score5 < score2) && (score5 < score3) && (score5 < score4)) return score5;

    //Return the lowest score
    return lowest;
}
