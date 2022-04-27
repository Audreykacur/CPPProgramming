// Created by Audrey Kacur on 3/23/22.

/*
3. Element Shifter
Write a function that accepts an int array and the array’s size as arguments.

The function should create a new array that is one element larger than the argument array.

The first element of the new array should be set to 0.
Element 0 of the argument array should be copied to element 1 of the new array,
element 1 of the argument array should be copied to element 2 of the new array, and so forth.
The function should return a pointer to the new array.
Demonstrate the function in a complete program.

 */

#include <iostream>
using namespace std;

int * function(int * ptrArr, int size) //accepts an int array and the size
{
    int *ptrNew;

    ptrNew = (int*) malloc((size+1) * sizeof(int));  //creates a new array that is one element larger than the argument array
    *ptrNew = 0;
    ptrNew++;

    //Copies values from orginal array to the new array
    for(int i = 0; i < size; i++){
        *ptrNew = *ptrArr;
        ptrNew++;
        ptrArr++;
    }

    //Returns to begining of array
    for(int i = 0; i < size+1; i++){
        ptrNew--;
    }
    return ptrNew; //The function should return a pointer to the new array
}

int main()
{
    int size;
    cout << "How many numbers are in the array: ";
    cin >> size;
    int num;
    int *pArr;
    int Array[size];
    pArr = &Array[0];

    for(int i = 0; i < size; i++) {
        cout << "Enter number " << i+1 << " of the array: ";
        cin >> num; //pointer that points to each index of the array
        *pArr = num;
        //Array[i] = *arr;
        pArr++;
    }

    for(int i = 0; i < size; i++) {
        cout << Array[i] << " ";
        pArr--;
    }
    cout << endl;
    int *ptrReturn  = function(pArr, size);

    for (int j = 0; j < size +1; j++) {
        cout << *ptrReturn << endl;
        ptrReturn++;
    }
}