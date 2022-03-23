//
// Created by Audrey Kacur on 2/22/22.
//

#include <iostream>
using namespace std;

void evenOdd (int arr[], int arr_size);

void print(const int values[], int values_size)
{
    for (int i = 0; i < values_size; i++)
    {
        if (i ==0){ cout << "}";}
        else { cout << ", "; }
        cout << values[i];
    }
    cout << "}" << endl;
}

int main()
{
    int arr1[] = { 0, 0, 0, 0, 0, 0};
    evenOdd(arr1, 6);
    print(arr1,6);
    cout << "Expected: {1, -1, 1, -1, 1, -1, 1, -1}" << endl;

    int arr1[] = { 0, 0, 0, 0, 0};
    evenOdd(arr2, 5);
    print(arr2,5);
    cout << "Expected: {1, -1, 1, -1, 1, -1, 1}" << endl;

    int arr3[] = { 0, 0, 0, 0, 0, 0};
    evenOdd(arr3, 5);
    print(arr3,6);
    cout << "Expected: {1, -1, 1, -1, 1, -1, 1, 0}" << endl;

    return 0;
}
