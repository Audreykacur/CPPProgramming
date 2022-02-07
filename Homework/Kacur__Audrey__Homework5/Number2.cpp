//
// Created by Audrey Kacur on 2/6/22.
//

//Hotel Occupancy

/*

    //calculates the occupancy rate for a hotel.





 NOTE: It is traditional that most hotels do not have a thirteenth floor. The loop in this program should skip
the entire thirteenth iteration.

 */


#include <iostream>
using namespace std;

int main()
{
    int floors = 0; // holds the value for the number of floors in the hotel
    int rooms = 0; // holds the value for the numbers of rooms on a floor
    int occupied = 0; // holds how may rooms on a floor are occupied
    int totalRooms = 0; //holds the value of how many rooms are in the hotel
    int totalOccupied = 0; //holds the value of how many rooms are not available
    cout << "Enter the number of floors the hotel has: "; // asking the user how many floors the hotel has
    cin >> floors;

    for (int x = 0; x < floors; x++) // A loop then iterates once for each floor.
    {
        cout << "Enter the number of rooms on floor " << (x+1) <<": "; //asks the user for the number of rooms on the floor
        cin >> rooms;
        cout << "Enter the number of the rooms on floor " << (x+1) << " are occupied: ";//asks the user how many of them are occupied.
        cin >> occupied;
        while (occupied > rooms)
        {
            cout << "You entered more occupied rooms than avaliable on this floor."
                 << "Please enter a valid number for occupied rooms: ";
            cin >> occupied;
        }
        totalRooms += rooms;
        totalOccupied += occupied;
    }
    double percentage = (totalOccupied/(double)totalRooms)*100.0;

    cout << "The hotel has " << totalRooms << " rooms.\n" //display how many rooms the hotel has
         << totalOccupied << " of the rooms are occupied.\n" //display how many of them are occupied
         << (totalRooms - totalOccupied) << " of the rooms are unoccupied.\n" //display how many rooms are unoccupied
         << percentage << "% of the rooms are occupied\n"; //display the percentage of rooms that are occupied
}