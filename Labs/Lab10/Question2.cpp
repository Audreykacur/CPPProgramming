//
// Created by Audrey Kacur on 3/30/22.

/*
    Imagine you are developing a softwaree package that requires users to enter their own passwords.
    Your software requires that users' passwords meet the following criteria:
        - The password should be at least six characters long
        - The password should contain at least one uppercase and at least one lowercase letter
        - The password should have at least one digit

    Write a program that asks for a password and then verifies that it meets the stated criteria.
    If it doesn't, the program should display a message telling the user why

 */

//Password Verifier
#include <iostream>
using namespace std;

//Global constants
const int SIZE = 80; //The maximum size of the array
const int MIN = 6; //The minimum number characters

//Function Prototypes
void displayRequirements();
void displayResult(char[]);
bool isValid(char[]);
bool hasLength(char[]);
bool hasLower(char[]);
bool hasUpper(char[]);
bool hasDigit(char[]);

int main()
{
    char cstring[SIZE]; //To hold the password

    displayRequirements();    //Display the password requirements

    cout << "Enter a password: ";    //Get the password as input from the user
    cin.getline(cstring, SIZE);

    displayResult(cstring); //Display a message indicating whether or not the password is valid

    return 0;
}

void displayRequirements() //The displayRequirements function displays the requirements needed for a valid password
{

    cout << "Password Requirements: \n" //Display the password requirements
         << "  - The password should be at least "
         << MIN << " characters long.\n"
         << "  - The password should contain at least one lowercase letter.\n"
         << "  - The password should have at least one digit. \n\n";
}

/*
    The displayResult function displays a message indicating whether or not the password is valid.
    If the password is invalid, additional messages are displayed for each failed requirment.
 */

void displayResult(char str[])
{
    //Determine if password is valid
    if (isValid(str)) cout << "The password is valid.\n"; //if so display a message indicating that the password is not valid

    else
    {
        cout << "The password is invalid.\n"; //if not, display a message indicating that the password is not valid

        //Determine if the length of the string is invalid
        if (!hasLength(str)) cout << "It should be at least " << MIN << " characters long. \n"; //if so, display a message indicating that the password failed to meet the length requirements

        //Determine if the string did not contain a lowercase character
        if (!hasLower(str)) cout << "It should contain at least one lowercase letter.\n"; //if so, display a message indicating that the password failed to meet the lowercase requirement

        //determine if the string did not contain an uppercase character
        if (!hasUpper(str)) cout << "It should contain at least one uppercase letter.\n"; //if so, display a message indicating that the password failed to meet the uppercase requirement.

        //determine if the string did not contain a digit character
        if (!hasDigit(str)) cout << "It should have at least one digit.\n"; //if so, display a message indicating that the password failed to meet the digit requirement
    }
}

// The isValid function returns true if the string meets all of the requirements of a valid password.
// Otherwise it returns false
bool isValid(char str[])
{
    bool status = false; // The status flag, set to false
    // Determine if the string meets the requirements for a valid password
    if(hasLength(str) && hasLower(str) && hasUpper(str) && hasDigit(str)) status = true; //if so, set the status to true
    return status; //Return the status
}

// The hasLength function returns true if the string contains the minimum amount of characters
// Otherwise it returns false
bool hasLength(char str[])
{
    bool status = false; // The status flag, set to false
    int count = 0; // To count the number of characters

    while (*str != '\0') //count each character in the string until the null terminator is reached
    {
        count++;//Increment the counter variable
        *str++; //Go to the next character
    }

    //Determine if the character counter variable is greater-than or equal-to the minimum number oof characters
    if (count >= MIN) status = true; //if so, set the status to true
    return status; //Return the status
}

// The hasLower function returns true if the string contains at least one lowercase characters
// Otherwise it returns false
bool hasLower(char str[])
{
    bool status = false; // The status flag, set to false
    int count = 0; // To count the number of characters

    while (*str != '\0' && count == 0) //tests each character until the null terminator is reeached or a lowercase character is found
    {
        //Determine if the character is lowercase, then increment count
        if (islower(*(str++))) count++;
    }

    //Determine if the lowercase character counter variable is greater-than zero
    if (count > 0) status = true; //if so, set the status to true

    return status; //Return the status
}


// The hasUpper function returns true if the string contains at least one uppercase character
// Otherwise it returns false
bool hasUpper(char str[])
{
    bool status = false; // The status flag, set to false
    int count = 0; // To count the number of characters

    //tests each character until the null terminator is reached or a uppercase character is found
    while (*str != '\0' && count == 0)
    {
        //Determine if the character is uppercase, then increment count
        if (isupper(*(str++))) count++;

    }

    //Determine if the uppercase character counter variable is greater-than zero
    if (count > 0) status = true; //if so, set the status to true

    return status; //Return the status
}

// The hasDigit function returns true if the string contains at least one Digit character
// Otherwise it returns false
bool hasDigit(char str[])
{
    bool status = false; // The status flag, set to false
    int count = 0; // To count the number of characters

    //tests each character until the null terminator is reached or a Digit character is found
    while (*str != '\0' && count == 0)
    {
        //Determine if the character is a Digit, then increment count
        if (isdigit(*(str++))) count++;

    }

    //Determine if the uppercase character counter variable is greater-than zero
    if (count > 0) status = true; //if so, set the status to true

    return status; //Return the status
}