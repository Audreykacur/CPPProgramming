//
// Created by Audrey Kacur on 2/6/22.
//

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
using namespace std;

int main()
{
    int numOfStudents; //hold the number of students in the class
    char name; // hold the string entered as a name
    char first, // first name of the alphabet
    last; //last name of the alphabet

    cout << "Enter the number of students you have in your class: "; // prompts the user to enter the number of students in the class
    cin >> numOfStudents;

    for (int x = 0; x < numOfStudents; x++)
    {
        cout << "Enter students name: ";
        cin >> name;

        if(name[0] < = first [0])

    }



}




//
// Created by Audrey Kacur on 2/6/22.
//

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

    char name[] = "amy"; // hold the string entered as a name
    char first[] = "zzzzz"; // first name of the alphabet
    char last[] = "aaaaa"; //last place in the alphabet


    for (int x = 0; x < 5; x++)
    {
        if (name[x] == first[x]) cout << " this letter match " << name[0] << endl;

        else if (name[x] < first[x])
        {
            cout << name << " comes before " << first << endl;
            for (int a = 0; a < 5; a++)
            {
                first[a] = name[a];
            }


        }



    }




    return 0;
}

