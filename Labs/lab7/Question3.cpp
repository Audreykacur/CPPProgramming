//
// Created by Audrey Kacur on 2/22/22.
//

/*
    The local Driver’s License Office has asked you to write a program that grades the written portion of the driver’s license exam.

    The exam has 20 multiple choice questions.

    Your program should ask the user to enter the student’s answers for each of the 20 questions, and the answers should be stored in another array.

    After the student’s answers have been entered, the program should display a message indicating whether the student passed or failed the exam. (A student must correctly answer 15 of the 20 questions to pass the exam.)

    It should then display the total number of correctly answered questions, the total number of incorrectly answered questions, and a list showing the question numbers of the incorrectly answered questions.

    Input Validation: Only accept the letters A, B, C, or D as answers.


 */

//Drivers license Exam

#include <iostream>
#include <<cctype> //Required for toupper
using namespace std;

//Function prototypes
void input(char [], int);
void checkAnswers(char[], char[], int &, int &, int);

int main() {
    //Constant for the number of questions
    const int ARRAY_SIZE = 20;

    //Array of the correct answers
    char answers[ARRAY_SIZE] = {'A', 'D', 'B', 'B', 'C',
                                'B', 'A', 'B', 'C', 'D',
                                'A', 'C', 'D', 'B', 'D',
                                'C', 'C', 'A', 'D', 'B'};

    //Array to hold the students replies
    char replies[ARRAY_SIZE];

    //Accumulator for number of correct answers
    int correctAnswers = 0;

    //Accumulator for number of incorrect answers
    int incorrectAnswers = 0;

    //Get the studnet's replies for each question
    input(replies, ARRAY_SIZE);

    //Check the student's replies against the correct answers
    checkAnswers(answers, replies, correctAnswers, incorrectAnswers, ARRAY_SIZE);

    //Determine whether the student passed or failed
    if (correctAnswers > 14)
        cout << "\n\nThe student passed the exam. \n\n";
    else
        cout << "\n\nThe student failed the exam. \n\n";

    //Display the numbers of correct and incorrect answers provided by the student
    cout << "Correct Answers: "
         << correctAnswers << endl;

    cout << "Incorrect Answers: "
         << incorrectAnswers << endl << endl;

    //Display a list of the questions that were incorrectly answered.

    cout << "Questions that were answered incorrectly: \n";

    for (int i = 0; i < 20; i++)
        if (answers[i] != replies[i])
            cout << (i + 1) << endl;

    return 0
}

/*
    the input function accepts an array of characters and an integer for the size
    of the array. The functioin asks the user to input answers to the exam and stores
    them in the array
 */

void input (char replies[], int size)
{
    //Flag to indicate a valid answer
    bool isValid;

    //Give instruction
    cout << "Please enter the student's answers "
         << "for each of the questions.\n"
         << "Press enter after typing each answer.\n"
         << "Please enter only an A, B, C, or D "
         << "for each question.\n";

    //Get the student's answers.
    for (int i = 0; i < size; i++)
    {
        //Display the question number
        cout << "Question " << (i+1) << ": ";

        do
        {
            //Get the students answers
            cin >> replies[i];

            //Validate the input
            //Only A,B,C,D allowed
            if (replies[i] == 'A' || replies[i] == 'B' || replies[i] == 'C' || replies[i] == 'D'){
                isValid = true;
            }
            else{
                cout << "Please try again.\n";
                isValid = false;
            }

        } while (!isValid);
    }
}

/*
    The CheckAnswers function compares the value in the
    answers array to the values in the replies array. The
    number of correct and incorrect answers are stored in the correct and incorrect reference parameters

 */

void checkAnswers (char answers[], char replies[], int &correct, int &incorrect, int size)
{
    /*Compare each of the student answers to the correct answers,
    and keep a count of the correctly answered and incorrectly answered
     questions
     */

    for (int i = 0; i < size; i++)
    {
        if(answers[i]==replies[i]) correct += 1;
        else incorrect += 1;
    }
}
