//
// Created by Audrey Kacur on 3/15/22.
//

/*
    Write a program that uses two identical arrays of at least 20 integers.
    It should call a function that uses the bubble sort algorithm to sort one of the arrays in ascending order.
    The function should keep a count of the number of exchanges it makes.
    The program then should call a function that uses the selection sort algorithm to sort the other array.
    It should also keep count of the number of exchanges it makes.
 */

//Sorting benchmarks
#include <iostream>
using namespace std;

//Constant for array sizes
const int SIZE = 20;

//Function prototypes
int bubbleSort(long[], int);
int selectionSort(long[], int);

int main()
{
    int exchanges; //number of exchanges made

    //Two arrays with identical values
    long acounts1[SIZE] = {
            5658845, 4520125, 7895122,
            8777541, 8451277, 1302850,
            8080152, 4562555, 5552012,
            5050552, 7825877, 1250255,
            1005231, 6545231, 3852085,
            7576651, 7881200, 4581002 };
    long accounts2[SIZE] = {
            5658845, 4520125, 7895122,
            8777541, 8451277, 1302850,
            8080152, 4562555, 5552012,
            5050552, 7825877, 1250255,
            1005231, 6545231, 3852085,
            7576651, 7881200, 4581002 };

    /*
    Sort accounts1 with bubble sort
    The function returns the number of exchanges made
    */

    exchanges = bubbleSort(accounts1, SIZE);

    //Display the number of exchanges made by the bubble sort
    cout << "\n" << exchanges
        << " exchanges were made by Bubble Sort. " << endl;

    return 0;
    }

    /*
        The bubbleSort function performs the bubble sort on the array
        and returns the number of exchanges made
     */

    int bubbleSort(long values[], int size)
    {
        bool swap;
        long temp;
        int exchanges = 0;

        do{
            swap = false; //no swaps made yet on this pass
            for (int count = 0; count < (size - 1); count++)
            {
                for(int j = 0; j < (size-1-count); j++)
                {
                    if (values[j + 1] <values[j])
                    {
                        int extra = values[j];
                        values[j] = values[j+1];
                        values[j+1] = extra;
                        exchanges++;
                    }
                }
            }
            //swap = true;
        } while (swap); //Same ass while (swaps == true);
        return exchanges;
    }


/*
        The selectionSort function performs the selection sort on array
        and returns the number of exchanges made
     */

    int selectionSort(long values[], int size)
    {
        int startScan; //Array indexes to be compared
        int minIndex;
        int exchanges = 0;
        long minValue;

        for (startScan = 0; startScan < (size - 1); startScan++)
        {
            minIndex = startScan;
            minValue = values[startScan];

            for(int index = startScan +1; index < size; index++) {
                {
                    if (values[index] < values[minIndex]) minIndex = index;

                }
                int extra = values[startScan];
                values[startScan] = values[minIndex];
                values[minIndex] = extra;
            }
        return exchanges;
    }





        //
// Created by Audrey Kacur on 3/15/22.
//

/*
    Write a program that uses two identical arrays of at least 20 integers.
    It should call a function that uses the bubble sort algorithm to sort one of the arrays in ascending order.
    The function should keep a count of the number of exchanges it makes.
    The program then should call a function that uses the selection sort algorithm to sort the other array.
    It should also keep count of the number of exchanges it makes.
 */

//Sorting benchmarks
#include <iostream>
using namespace std;

//Constant for array sizes
        const int SIZE = 20;
//Function prototypes
        int selectionSort(long[], int);

        int main()
        {
            int exchanges; //number of exchanges made

            //Two arrays with identical values
            long acounts1[SIZE] = {
                    5658845, 4520125, 7895122,
                    8777541, 8451277, 1302850,
                    8080152, 4562555, 5552012,
                    5050552, 7825877, 1250255,
                    1005231, 6545231, 3852085,
                    7576651, 7881200, 4581002 };
            long accounts2[SIZE] = {
                    5658845, 4520125, 7895122,
                    8777541, 8451277, 1302850,
                    8080152, 4562555, 5552012,
                    5050552, 7825877, 1250255,
                    1005231, 6545231, 3852085,
                    7576651, 7881200, 4581002 };

            //Display the number of exchanges made by the bubble sort
            cout << "\n" << exchanges
                 << " exchanges were made by Bubble Sort. " << endl;

            return 0;
        }

        /*
            The selectionSort function performs the selection sort on array
            and returns the number of exchanges made
         */

        int selectionSort(long values[], int size)
        {
            int startScan; //Array indexes to be compared
            int minIndex;
            int exchanges = 0;
            long minValue;

            for (startScan = 0; startScan < (size - 1); startScan++)
            {
                minIndex = startScan;
                minValue = values[startScan];

                for(int index = startScan +1; index < size; index++) {
                    {
                        if (values[index] < values[minIndex]) minIndex = index;

                    }
                    int extra = values[startScan];
                    values[startScan] = values[minIndex];
                    values[minIndex] = extra;
                }
            }
            return exchanges;
        }





