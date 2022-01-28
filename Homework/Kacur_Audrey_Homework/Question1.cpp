// Ingredient Adjuster
/*
A cookie recipe calls for the following ingredients: 
• 1.5 cups of sugar 
• 1 cup of butter 
• 2.75 cups of flour   
The recipe produces 48 cookies with this amount of the ingredients. Write a program that asks the user 
how many cookies he or she wants to make, and then displays the number of cups of each ingredient 
needed for the specified number of cookies.  
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double cookie;
    cout << "\nHow many cookies would you like to make?" << endl; //print the question ou
    cin >> cookie;                                                // allows the user to enter a number

    double amount = cookie / 48;  //cuts the amount of cookies the user enters to how many times the recipe will be needed
    double sugar = amount * 1.5;  //finds how much sugar will be needed for the recipe
    double butter = amount * 1.0; //finds how much butter will be needed for the recipe
    double flour = amount * 2.75; //finds how much flour will be needed for the recipe

    //Display how many cups of ingredients are needed
    cout << "\nYou need " << sugar << " cups of sugar." << endl;
    cout << "\nYou need " << butter << " cups of butter." << endl;
    cout << "\nYou need " << flour << " cups of flour." << endl;
}