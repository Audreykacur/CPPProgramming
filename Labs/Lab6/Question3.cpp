/*

Write a program that determines which of a company’s four divisions (Northeast, Southeast, Northwest, and Southwest)
had the greatest sales for a quarter.

It should include the following two functions, which are called by main.

    double getSales()
        is passed the name of a division.
        It asks the user for a division’s quarterly sales figure,
        validates the input,
        then returns it.
        It should be called once for each division.

    void findHighest()
        is passed the four sales totals.
        It determines which is the largest and prints the name of the high grossing division, along with its sales figure.

Input Validation: Do not accept dollar amounts less than $0.00.


*/

//Winning division
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Function prototypes
double getSales(string);


void findHighest(double, double, double, double);

int main()
{
    //Determine the division with the findHighest
    //sales figure

    findHighest(getSales("Northeast"), getSales("Southeast"), getSales("Northwest"), getSales("Southwest"));
    return 0;
}

double getSales(string divisionName)
{
    double sales; // To hold the quarterly sales figure

    //get the quarterly sales figure
    cout << "Enter the quarterly sales figure for the "
         << divisionName << " division: ";
    cin >> sales;

    // Validate the quarterly sales figure
    while (sales < 0)
    {
        cout << "Please enter a valid quarterly sales figure for the "
             << divisionName << " division: ";
        cin >> sales;

    }

    //Return the quarterly sales figure
    return sales;
}

/*

The findHighest function is passed the four sales totals.
It determines which is the largest and prints the name of
the high grossing division, along witth its sales figure.

*/

void findHighest(double salesNE, double salesSE, double salesNW, double salesSW)
{
    string divisionName; //to hold the division name
    double highestSales; //to hold the highest sales

    //Determine which sales figure is the largest

    //if NE is the greatest
    if ((salesNE > salesSE) && (salesNE > salesNW) && (salesNE > salesSW))
    {
        divisionName = "Northeast";
        highestSales = salesNE;
    }
    if ((salesSE > salesNE) && (salesSE > salesNW) && (salesSE > salesSW))
    {
        divisionName = "Southeast";
        highestSales = salesSE;
    }
    if ((salesNW > salesNE) && (salesNW > salesSE) && (salesNW > salesSW))
    {
        divisionName = "Northwest";
        highestSales = salesNW;
    }
    if ((salesSW > salesNE) && (salesSW > salesSE) && (salesSW > salesNW))
    {
        divisionName = "Southwest";
        highestSales = salesSW;
    }

    //Display the division with the highest sales
    cout << "\nThe " << divisionName
         << " division had the highest sales this quarter."
         <<fixed << showpoint << setprecision(2)
         << highestSales << endl << endl;

}