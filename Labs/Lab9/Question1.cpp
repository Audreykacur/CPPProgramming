//
// Created by Audrey Kacur on 3/23/22.
//

//A simulation uses a pointer to count roach infestation in different rooms.
//What happens when the following code is executed?

int kitchen = 0;
int bedroom = 0;
int* pointer = &kitchen; //initialize the pointer variable to kitchen
*pointer++; //the kitchen value is now 1
pointer = &bedroom; // the pointer is now pointing to the bedroom
*pointer++; //the bedroom value is now 1