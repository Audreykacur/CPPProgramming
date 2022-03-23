//
// Created by Audrey Kacur on 3/15/22.
//
/*
    Write a program that has an array of at least 20 integers.
    It should call a function that uses the linear search algorithm to locate one of the values.
    The function should keep a count of the number of comparisons it makes until it finds the value
    The program then should call a function that uses the binary search algorithm to locate the same value.
    It should also keep count of the number of comparisons it makes.


 */

//search Benchmarks
#include <iostream>
using namespace std;

//global constants
const int ARRAY_SIZE = 20; //the array size

//function prototype
int linearSearchBench(int[], int, int);
int binarySearchBench(int[], int, int);

int main()
{
    int comparisons; //to hold the number of comparisons.

    //initialize an array with 20 integer values in ascending order
    int tests[ARRAY_SIZE] = {101, 142, 147, 189, 199, 207, 222,
                             234, 289, 296, 310, 319, 388, 394,
                             417, 429, 447, 521, 536, 600};

    //Display the value being searched for
    cout << "Searching for the value 521, "
         << "located near the end of the array.\n";

    //Perform the linear search
    comparisions = linearSearchBench(tests, ARRAY_SIZE, 521);

    //Display the results of the linear search
    cout << "The linear search made " << comparisions;
    cout << "comparisons.\n";



    //Perform the binary search
    comparisions = binarySearchBench(tests, ARRAY_SIZE, 521);

    //Display the results of the binary search
    cout << "The linear search made " << comparisions;
    cout << "comparisons.\n";

    return 0;

}

/*
    The linearSearchBench function performs a linear search on array for value.
    It returns the number of comparisons made.
 */

int linearSearchBench(int values[], int size, int value)
{
    bool found = false; //The found flag, initialized to false

    int  comparisons = 0; //To hold the number of comparisons
    int index = 0; //To hold the array index

    /*
     search while the value has not been found and
     the index is still in the array bounds
     */
    while(!found && index < size) //THIS IS WHERE YOU ADD CODE
    {
        comparisons++;
        if (value == values[index])
        {
            found = true;
        }
        index ++;
    }

}

/*
    The binarySearchBench function performs a binary search on array
    for value. It returns the number of comparisons made.
 */

int binarySearchBench(int array[], int size, int value)
{
    bool found = false; // The found flag, initialized to false
    int first = 0; //To hold the index values of the first element
    int middle; // To hold the index value of the mid_point
    int last = size - 1; //To hold the index value of the last element
    int comparisions = 0; //To hold the number of comparisons

    //Search while the value has not been found and the index is still in the array bounds
    while (!found && first <= last)
    {
        //Calculate the mid_point
        middle = (first + last)/2;

        comparisions++; //Increment the number of comparisons;

        //Determine if the value is at the midpoint or lower/ upper half
        if (array[middle] == value)
        {
            if (array[middle] == value)   found = true;
            else if (array[middle] > value) last = middle - 1;
            else first = middle + 1;
        }
    }
    //Return the number of comparisons
    return comparisions;
}
















