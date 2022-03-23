//
// Created by Audrey Kacur on 3/23/22.
//

// Here, we ad another pointer to the code of the preceding problem
// What happens when the code is executed?

int kitchen = 1;
int bedroom = 1;
int* pointer = &bedroom; // initialization of the pointer pointing to bedroom
int* p2; //creates a second pointer but does not initialize it to anything
p2 = pointer; // initializes the second pointer to the original pointer (p2 --> bedroom)
*p2 = 5; //the second pointer is pointing to the original pointer which is pointing to the bedroom which now = 5 (bedroom = 5)
pointer = &kitchen; // the pointer is now pointing to the kitchen (pointer -> kitchen)
*pointer = *p2; //the second pointer value is 5 becasue it is pointing to the bedroom location and the original pointer is pointing to the kitchen so now the kitchen value is equal to 5 (kitchen = 5)