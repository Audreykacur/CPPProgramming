//
// Created by Audrey Kacur on 3/23/22.
//

/*
    Write a function that accepts an int array and the array's size as arguments.
    The function should create a copy of the array, except that the element values should be reversed in the copy.
    The function should return a pointer to the new array.
    Demonstrate the function in a complete program
 */

//reverse array

#include <iostream>
using namespace std;

//Prototype
int *reverseArray(int[], int);
void showArray(int[], int);

int main()
{
    const int SIZE = 10;
    int values[SIZE] = {1,2,3,4,5,6,7,8,9,10};

    //Display the contents of the array
    cout << "The contents of the orriginal array arer: \n";
    showArray(values, SIZE);

    //Make a reverse copy of the array
    int* arrCopy = reverseArray(values, SIZE);

    //Display the contents of the new array
    cout << "The contents of the copy are:\n";
    showArray(arrCopy, SIZE);

    return 0;
}

/*
    The reverseArray function accepts an int array and an int indicating the array's size
    The function returns a pointer to an array that is a reverse copy of the array that was passed as an argument
 */

int *reverseArray(int arr[], int size) // Write a function that accepts an int array and the array's size as arguments
{
    int sourceIndex; //index into the source array  (this number is the original array so this last number would go into the targetIndex first number)
    int targetIndex; //Index into the target array

    //Make sure the size is positive and non-zero
    if (size <= 0) return NULL;

    //Allocate an array large enough to hold a copy of the array that was passed as an argument
    int* copy = new int[size]; //The function should create a copy of the array

    //Copy arr's elements, in reverse order, to the new array
    for(sourceIndex = size - 1, targetIndex = 0; targetIndex < size; targetIndex++) //except that the element values should be reversed in the copy.
    {
        //arr[sourceIndex] //this is the last number of the original array
        //copy[targetIndex] //this is the first number in the copy
        copy[targetIndex] = arr[sourceIndex];
        sourceIndex--;
    }
    return copy; //returns a pointer to the new array
}
// The showArray function displays the contents of an int array
void showArray(int arr[], int size)
{
    for (int index = 0; index < size; index++) cout << arr[index] << " ";

    cout << endl;
}

