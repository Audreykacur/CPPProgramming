//
// Created by Audrey Kacur on 2/16/22.
//

/*

2. Star Search

A particular talent competition has five judges, each of whom awards a score between 0 and 10 to each
performer. Fractional scores, such as 8.3, are allowed.

A performer’s final score is determined by dropping the highest and lowest score received, then averaging
the three remaining scores.

Write a program that uses this method to calculate a contestant’s score. It should include the following
functions:
    • void getJudgeData() should ask the user for a judge’s score, store it in a reference parameter variable, and validate it. This function should be called by main once for each of the five judges.
    • void calcScore() should calculate and display the average of the three scores that remain after dropping the highest and lowest scores the performer received. This function should be called
        just once by main and should be passed the five scores.

The last two functions, described below, should be called by calcScore, which uses the returned information to determine which of the scores to drop.
    • int findLowest() should find and return the lowest of the five scores passed to it.
    • int findHighest() should find and return the highest of the five scores passed to it.

Input Validation: Do not accept judge scores lower than 0 or higher than 10

 */

#include <iostream>
using namespace std;

void getJudgeData(double &);
void calcScore(double &, double &, double &, double &, double &);


double findLowest(double judgeScore1, double judgeScore2, double judgeScore3, double judgeScore4, double judgeScore5)
{

    if((judgeScore1 < judgeScore2) && (judgeScore1 < judgeScore3) && (judgeScore1 < judgeScore4) && (judgeScore1 < judgeScore5))  return judgeScore1;

    if((judgeScore2 < judgeScore2) && (judgeScore2 < judgeScore3) && (judgeScore2 < judgeScore4) && (judgeScore2 < judgeScore5))  return judgeScore2;

    if((judgeScore3 < judgeScore2) && (judgeScore3 < judgeScore3) && (judgeScore3 < judgeScore4) && (judgeScore3 < judgeScore5))  return judgeScore3;

    if((judgeScore4 < judgeScore2) && (judgeScore4 < judgeScore3) && (judgeScore4 < judgeScore4) && (judgeScore4 < judgeScore5))  return judgeScore4;

    if((judgeScore5 < judgeScore2) && (judgeScore5 < judgeScore3) && (judgeScore5 < judgeScore4) && (judgeScore5 < judgeScore5))  return judgeScore5;

    return 0;
}



double findHighest(double judgeScore1, double judgeScore2, double judgeScore3, double judgeScore4, double judgeScore5)
{

    if((judgeScore1 > judgeScore2) && (judgeScore1 > judgeScore3) && (judgeScore1 > judgeScore4) && (judgeScore1 > judgeScore5))  return judgeScore1;

    if((judgeScore2 > judgeScore2) && (judgeScore2 > judgeScore3) && (judgeScore2 > judgeScore4) && (judgeScore2 > judgeScore5))  return judgeScore2;

    if((judgeScore3 > judgeScore2) && (judgeScore3 > judgeScore3) && (judgeScore3 > judgeScore4) && (judgeScore3 > judgeScore5))  return judgeScore3;

    if((judgeScore4 > judgeScore2) && (judgeScore4 > judgeScore3) && (judgeScore4 > judgeScore4) && (judgeScore4 > judgeScore5))  return judgeScore4;

    if((judgeScore5 > judgeScore2) && (judgeScore5 > judgeScore3) && (judgeScore5 > judgeScore4) && (judgeScore5 > judgeScore5))  return judgeScore5;

    return 0;
}

int main()
{
    double judgeScore1, judgeScore2, judgeScore3, judgeScore4, judgeScore5; //holds the 5 judges scores

    getJudgeData(judgeScore1);                         //takes the user input for judgeScore

    getJudgeData(judgeScore2);                         //takes the user input for judgeScore

    getJudgeData(judgeScore3);                         //takes the user input for judgeScore

    getJudgeData(judgeScore4);                         //takes the user input for judgeScore

    getJudgeData(judgeScore5);                         //takes the user input for judgeScore

    calcScore(judgeScore1, judgeScore2, judgeScore3, judgeScore4, judgeScore5);


}

//to calculate contestants scores
void getJudgeData(double &judgeScore)
{
    cout << "Please enter score: "; //ask the user for a judge’s score
    cin >> judgeScore;

    //store it in a reference parameter variable******

    //validate it
    while  (judgeScore < 0 || judgeScore >10)
    {
        cout << "This score is not valid plz enter a valid score: ";
        cin >> judgeScore;
    }
}

void calcScore(double &judgeScore1, double &judgeScore2, double &judgeScore3, double &judgeScore4, double &judgeScore5)
{
    double lowest = findLowest(judgeScore1, judgeScore2, judgeScore3, judgeScore4, judgeScore5);
    double highest = findHighest(judgeScore1, judgeScore2, judgeScore3, judgeScore4, judgeScore5);

    double average = (judgeScore1 + judgeScore2 + judgeScore3 + judgeScore4 + judgeScore5 - highest - lowest)/3; //calculate the average

    cout << "The average score is: " << average << endl;
}





