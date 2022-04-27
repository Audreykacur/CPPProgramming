// Created by Audrey Kacur on 4/20/22.

/*
    Tic Tac Toe Game
    Write a program that allows two players to play a game of tic tac toe
    Use a two-dimensional char array with three rows and three columns as the game board

    Each element of the array should be initialized with an asterisks (*)

    The program should run a loop that:
    - Displays the contents of the game board array
    - Allows player 1 to select a location on the board for an 'X' The program should ask the user to enter the row and column number
    - Allows player 2 to select a location on the board for an 'O' The program should ask the user to enter the row and column number
    - Determines whether a player has won or a tie has occurred. if a player has won, the program should declare that player the winner and end. If a tie has occurred, the program should say so and end

    Player 1 wins when there are three X's in a row on the game board. The X's can appear in a row, in a column, or diagonally across the board
    Same for Player 2 with O's

    A tie occurs when all of the locations on the board are full, but there is no winner.
 */


//In the directions it says the user needs to enter the row and column number but if the user enters the number then it is more user friendly
// i have placed comments next to the code that would need to change if the user were to enter the column and row number
#include <iostream>
using namespace std;


void tablePrint(char board[3][3], int value, char symbol) //this function places the symbol the user has in the tictactoe table where they want it
{ //i would pass the row and column number here and change the symbol using those numbers if i had the user enter it that way

    // board is the current playing board
    // value = value user choose corresponding to the table
    // symbol is the players symbol either a "o" or "x"

    //checks which placement the user wants and places the symbol in the corresponding spot
    if (value == 1)  board [0][0] = symbol;
    else if (value == 2) board [0][1] = symbol;
    else if (value == 3) board [0][2] = symbol;
    else if (value == 4) board [1][0] = symbol;
    else if (value == 5) board [1][1] = symbol;
    else if (value == 6) board [1][2] = symbol;
    else if (value == 7) board [2][0] = symbol;
    else if (value == 8) board [2][1] = symbol;
    else if (value == 9) board [2][2] = symbol;
    else cout << "invalid entry you forfit your turn"; // if the user enters an invalid number the player is notified
}


void bubbleSort(int values[]) //sorts the array so it is easier to check the winning placement
{
    int temp; // creates a temporary variable
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (values[j] > values[j + 1]) //if the value before the next is bigger then...
            {
                temp = values[j]; // hold the first value in the temperary variable
                values[j] = values[j + 1]; //the first value is now the second value
                values[j + 1] = temp; // the second value is now the temporary value
            }
        }
    }
}

int validate() //checks to make sure the user entered a valid option
{
    int place; //holds the value the user enters for where they want to place their peice
    cin >> place;

    //makes sure the user entered a valid number
    switch(place){
        case(1):
        case(2):
        case(3):
        case(4):
        case(5):
        case(6):
        case(7):
        case(8):
        case(9):
            return place; //returns the value the user entered if it is valid
            break; //no need to finish this switch if it was valid
        default: //if the number is not valid the user must re-enter a number
            cout << "Number invalid please reenter a valid option: "; //tells the user to re-enter a number
            validate(); //re runs the function to intake a valid option
    }
    return place; //returns a valid number
}


int winners(int num[]) //function to find out if their is a winner
{
    int WIN = 100; //win is declared to a number that will never be used so winner wont be choosen if their is none
    bubbleSort(num); //bubble sort is called to sort the array to place the numbers in order
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            for (int k = 2; k < 5; k++) // goes through the sorted array to look for the winning numbers
            {
                if(num[i] == 1 && num[j] == 2 && num[k] == 3) WIN = 1;
                else if(num[i] == 1 && num[j] == 4 && num[k] == 7) WIN = 1;
                else if(num[i] == 1 && num[j] == 5 && num[k] == 9) WIN = 1;
                else if(num[i] == 2 && num[j] == 5 && num[k] == 8) WIN = 1;
                else if(num[i] == 3 && num[j] == 5 && num[k] == 7) WIN = 1;
                else if(num[i] == 3 && num[j] == 6 && num[k] == 9) WIN = 1;
                else if(num[i] == 4 && num[j] == 5 && num[k] == 6) WIN = 1;
                else if(num[i] == 7 && num[j] == 8 && num[k] == 9) WIN = 1;
                else WIN = 0; //if their is a winning number win = 0
            }
        }
    }
    return WIN; //returns win to tell if their is a winner or not
}

int main()
{
    char table[3][3] = {'*', '*', '*', '*', '*', '*', '*', '*', '*'};    // 2D char array 3 rows and 3 columns
    //char table[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};    this is the way i would initialize it so its still chars and saves space

    //assigns each place in the board a number so the user knows where the placements are
    table [0][0] = '1';
    table [0][1] = '2';
    table [0][2] = '3';
    table [1][0] = '4';
    table [1][1] = '5';
    table [1][2] = '6';
    table [2][0] = '7';
    table [2][1] = '8';
    table [2][2] = '9';

    //introduces the user to the game
    cout << "Welcome to tic - tac - toe"
         << "\nBelow you will see a table with numbers in it"
         << "\nWhen proompted enter the number cordinating to the spot where you would like to put your game peice\n\n";

    int player1Spots[5] = {0, 0, 0, 0, 0}; //initilizes the user 1 placement array
    int player2Spots[5] = {0, 0, 0, 0, 0}; //initilizes the user 1 placement array

    int winner = 0; //value holds weither or not there is a winner
    int place = 0; //holds the value of where the user wants to place their peice
    int k = 0; //holds how many times the loop ran
    int check; //checks to see if their is a winner

    while (k<5) //runs the loop a max 5 times because that will fill the board
    {
        for (int i = 0; i < 3; i++) //prints the current board
        {
            for (int j = 0; j < 3; j++)
            {
                cout << " " << table[i][j] << " " ;
                if (j < 2) cout << "|";
            }
            cout << "\n";
            if (i < 2)  cout << "-----------\n";
        }

        cout << "\n";

        cout << "Player 1 enter your desired spot: "; //asks the user to enter the position they would like
        place = validate(); //intakes and validates the user options
        player1Spots[0] = place; //the number the user entered is places into the user array
        check = winners(player1Spots); //finds out if there is a winner
        tablePrint(table, place, 'X'); //places the user symbol into the table
        for (int i = 0; i < 3; i++) //prints the current board
        {
            for (int j = 0; j < 3; j++)
            {
                cout << " " << table[i][j] << " " ;
                if (j < 2) cout << "|";
            }
            cout << "\n";
            if (i < 2) cout << "-----------\n";
        }
        cout << "\n";

        if (check == 1) // if check comes back as 1 then the winner is player 1
        {
            cout << "\nWINNER: PLAYER 1\n"; //lets the user know the winner is 1
            break;
        }
        else {
            if (k < 4) //user 2 will always only get 4 choices then the board is full
            {
                cout << "Player 2 enter your desired spot: "; //asks the user to enter the position they would like
                place = validate(); //intakes and validates the user options
                player2Spots[0] = place; //the number the user entered is places into the user array
                check = winners(player2Spots); //finds out if there is a winner
                tablePrint(table, place, 'O'); //places the user symbol into the table
                if (check == 1) //if check comes back as 1 then the winner is player 2
                {
                    cout << "WINNER: PLAYER 2\n"; //lets thee user know the winner is 2
                    for (int i = 0; i < 3; i++) //prints the board
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            cout << " " << table[i][j] << " " ;
                            if (j < 2) cout << "|";
                        }
                        cout << "\n";
                        if (i < 2) cout << "-----------\n";
                    }
                    cout << "\n";
                    break; //ends the game is user 2 won
                }
            }
            k++; //increase k so we know how full the board is
        }
    }
    if (check != 1) cout << "There has been a tie"; //tells the user there has been a tie
}