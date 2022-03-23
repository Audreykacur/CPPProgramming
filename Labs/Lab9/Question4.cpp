//
// Created by Audrey Kacur on 3/23/22.
//

//this code modifies an array using pointers

// This code modifies an array using pointers
int values[] = {2,3,5};
int* p = values +1 ; // +1 makes it pointer point to the second element of the array
*p = 0; // pointer makes the second value of the array = 0
*(p+1) =1; // the pointer + 1 has the value that changes be the third element of the array and that value changes to a 1