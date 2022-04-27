//
// Created by Audrey Kacur on 3/23/22.
//

/*

 1. Median Function
In statistics, when a set of values is sorted in ascending or descending order, its median is the middle value.
If the set contains an even number of values, the median is the mean, or average, of the two middle values.
Write a function that accepts as arguments the following:
    A) An array of integers
    B) An integer that indicates the number of elements in the array
The function should determine the median of the array.
This value should be returned as a double. (Assume the values in the array are already sorted.)
Demonstrate your pointer prowess by using pointer notation instead of array notation in this function.

 */

//Demonstrate your pointer prowess by using pointer notation instead of array notation in this function.


//argv[i] is equivalent to *(argv + i)

#include <iostream>
using namespace std;

double medianFunction(int array[], int size) //a functions that accepts an array of integers and size of the array
{ //USE A POINTER TO ADD THE ARRAY INTO THIS FUNCTION
    double median = 0; //the returned value should be a double
    int smallMiddleNum = 0, bigMiddleNum = 0, middleNum = 0;
    //determine the median of the array : the middle number of the array
    //if even number then the average of the two middle numbers

    if (size % 2 == 0) //then it is even
    {
        smallMiddleNum = size/2 - .5;
        bigMiddleNum = size/2 + .5;
        median = ((*array + smallMiddleNum) + *(array + bigMiddleNum)) /2.0;
    }
    else
    {
        middleNum = size/2;
        median = *(array + middleNum);
    }
    return median; // This median should be returned as a double
}

int main()
{
    int *arr; //declare array pointer;
    int num;
    int size;
    cout << "How many numbers are in the array: ";
    cin >> size;

    int Array[size];

    for(int i = 0; i < size; i++) //values in the array are already sorted
    {
        cout << "Enter number " << i+1 << " of the array: ";
        cin >> num; //pointer that points to each index of the array
        arr = &num;
        Array[i] = *arr;
        arr++;
    }

    double middleNumber = medianFunction(Array, size);
    cout << "The median number is: " << middleNumber << endl ;
}

//pointer pointing to the array
