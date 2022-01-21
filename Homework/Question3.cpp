// Word Game
/*
Write a program that plays a word game with the user. The program should ask the user to enter the 
following: 
• His or her name 
• His or her age 
• The name of a city 
• The name of a college 
• A profession 
• A type of animal 
• A pet’s name   
After the user has entered these items, the program should display the following story,  inserting 
the user’s input into the appropriate locations:   
There once was a person named NAME who lived in CITY. At the age of  AGE, NAME went to college at 
COLLEGE. NAME graduated and went to work  as a PROFESSION. Then, NAME adopted a(n) ANIMAL named 
PETNAME. They  both lived happily ever after!  
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string name, city, college, profession, animal, pName;
    int age;

    cout << "\nEnter your name:" << endl; //print the question ou
    cin >> name;
    cout << "\nEnter your age:" << endl; //print the question ou
    cin >> age;
    cout << "\nEnter the city you live in:" << endl; //print the question ou
    cin >> city;
    cout << "\nEnter the college you go to:" << endl; //print the question ou
    cin >> college;
    cout << "\nEnter a profession:" << endl; //print the question ou
    cin >> profession;
    cout << "\nEnter a type of animal:" << endl; //print the question ou
    cin >> animal;
    cout << "\nEnter a pets name:" << endl; //print the question ou
    cin >> pName;

    cout << "\n There once was a person named " << name << " who lived in " << city << ". At the age of " << endl;
    cout << age << ", " << name << " went to college at " << college << ". " << name << " graduated and went to work as a " << endl;
    cout << profession << ". Then, " << name << " adopted a(n) " << animal << " named " << pName << ". They both lived happily ever after!" << endl;
}