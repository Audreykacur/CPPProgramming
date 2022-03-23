//
// Created by Audrey Kacur on 2/16/22.
//

/*
3. Overloaded Hospital

Write a program that computes and displays the charges for a patient’s hospital stay.

First, the program should ask if the patient was admitted as an in-patient or an outpatient.

If the patient was an in-patient, the following data should be entered:
    • The number of days spent in the hospital
    • The daily rate
    • Hospital medication charges
    • Charges for hospital services (lab tests, etc.)

The program should ask for the following data if the patient was an out-patient:
    • Charges for hospital services (lab tests, etc.)
    • Hospital medication charges

The program should use two overloaded functions to calculate the total charges.

 One of the functions should accept arguments for the in-patient data, while the other function accepts arguments for out-patient information.

 Both functions should return the total charges.

 Input Validation: Do not accept negative numbers for any data.

 */

// First, the program should ask if the patient was admitted as an in-patient or an outpatient.
#include <iostream>
#include <iomanip>
using namespace std;

double nonnegINT (double x)
{
    while (x < 0)
    {
        cout << "Please enter a positive number: ";
        cin >> x;
    }
    return x;
}

double nonNegDoub (double x)
{
    while (x < 0)
    {
        cout << "Please enter a positive number: ";
        cin >> x;
    }
    return x;
}

void calcResult(int days, double daily, double medication, double services)
{
    cout << "The total cost for this in-patient: " << ((days * daily) +medication + services);

}

void calcResult(double medication, double services)
{
    cout << fixed << setprecision(2) << "The total cost for this out-patient: " << (medication + services);

}

int main()
{
    int status; //holds the value for if the paitent is in or out of the hospital
    int days;
    double daily, medication, services;

    cout << "Are you admitted as an in-patient or outpaitent?\n"
         << "Enter 1 for in-patient: \n"
         << "Enter 0 for out-paitent:\n"; //First, the program should ask if the patient was admitted as an in-patient or an outpatient.
    cin >> status;

    if ((status == 1) || (status == 0)) int w = 0; //makes sure the input is valid
    else
    {
        cout << "Invalid: "
             << "Enter 1 for in-patient:\n"
             << "Enter 0 for out-paitent:\n";
        cin >> status;
    }


    if (status == 1)
    {
        cout << "\nEnter the amount of days spent in the hospital: ";
        cin >> days;
        days = nonnegINT (days);

        cout << "\nEnter the the daily rate: ";
        cin >> daily;
        daily = nonNegDoub(daily);

        cout << "\nEnter the total for hospital medication charges: ";
        cin >> medication;
        medication = nonNegDoub(medication);

        cout << "\nEnter the total charges for hospital services (ex. lab tests): ";
        cin >> services;
        services = nonNegDoub(services);

        calcResult(days, daily, medication, services);
    }

    if (status == 0)
    {
        cout << "\nEnter the total charges for hospital services (ex. lab tests): ";
        cin >> services;
        services = nonNegDoub(services);

        cout << "\nEnter the total hospital medication charges: ";
        cin >> medication;
        medication = nonNegDoub(medication);

        calcResult(medication, services);
    }

}




















