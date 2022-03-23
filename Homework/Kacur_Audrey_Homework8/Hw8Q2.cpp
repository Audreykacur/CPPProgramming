//
// Created by Audrey Kacur on 3/16/22.
//
/*
2. Charge Account Validation

Write a program that lets the user enter a charge account number. The program should determine if the number is valid by checking for it in the following list:

5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
1005231, 6545231, 3852085, 7576651, 7881200, 4581002

The list of numbers above should be initialized in a single-dimensional array. Perform a binary search to locate valid account numbers.
Use the selection sort algorithm to sort the array before the binary search is performed.

If the user enters a number that is in the array, the program should display a message saying that the number is valid.
If the user enters a number that is not in the array, the program should display a message indicating that the number is invalid.
 */

#include <iostream>
using namespace std;

string binarySearchBench(long array [], int size, long value)
{

    bool found = false; // The found flag, initialized to false
    int first = 0; //To hold the index values of the first element
    int middle; // To hold the index value of the mid_point
    int last = size - 1; //To hold the index value of the last element

    //Search while the value has not been found and the index is still in the array bounds
    while (!found && (first <= last))
    {
        middle = (first + last)/2; //Calculate the mid_point
        if (array[middle] == value) //Determine if the value is at the midpoint or lower/ upper half
        {
            found = true; //if the number was found
            return("The number is valid!");
        }
        else if (array[middle] > value) last = middle - 1; //if the number is smaller than the current indexed number
        else first = middle + 1; // if the value is not smaller or found
    }
    return("The number is not valid");
}

void selectionSort(long values[17], int size, long number)
{
    int startScan; //Array indexes to be compared
    int minIndex; //hold the smallest indexed number
    long minValue; //holds the smallest value

    for (startScan = 0; startScan < (size - 1); startScan++) //runs through the array to sort it
    {
        minIndex = startScan; // sets min index to 0 to start the loop
        minValue = values[startScan]; // sets the min value to the fiirst value of the array

        for(int index = (startScan + 1); index < size; index++) //nested loop that flips the numbers if needed
        {
            if (values[index] < values[minIndex]) minIndex = index; //if index value is smaller than value then flip
            //flips the values
            minValue = values[startScan];
            values[startScan] = values[minIndex];
            values[minIndex] = minValue;
        }
    }
}

int main()
{
    long array[18] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                       8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                       1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };

    long number;
    cout << "Please enter a number: "; //has the user enter the number they would like
    cin >> number;

    //Use the selection sort algorithm to sort the array before the binary search is performed.
    selectionSort(array, 17, number);
    cout << (binarySearchBench(array, 17, number)); // Perform a binary search to locate valid account numbers.
}