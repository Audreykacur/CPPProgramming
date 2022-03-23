//
// Created by Audrey Kacur on 3/2/22.
//

/*

    Write a program that calculates and displays the total travel expenses of a buisness person on a trip

    the program should have functions that ask for and return the following:
    - the total number of days spent on the trip
    - the time of departure on the first day of the trip, and the time of arrival back home on the last day of the trip
        (HINT: use of military time may make this eaisier to manage, 13:00 instead of 1pm)
    - the amount of any round trip airfare
    - the amount of any car rentals
    - miles driven, if a private vehicle was used. Calculate the vehicle expense as $0.27 per mile driven
    - parking fees (The company allows up to $6 per day. Anything in excess of this must be paid by the employee)
    - taxi fees, if a taxi was used anytime during the trip (The company allows up to $10 per day, for eachday a taxi was used.
        Anything in excess of this must be paid by the employee)
    - conference or seminar registration fees
    - Hotel expenses (the company allows up to $90 per night for lodging. Anything in excess of this must be paid by the employee.)
    - the amount of each meal eaten. On the first day of the trip, breakfast is allowed as on expense if the time of departure is before 7am
        Lunch is allowed if the time of departure is before 12 noon, Dinner is allowed on the first day if the time of departure is before
        6 p.m. On the last day of the trip, breakfast is allowed if the time of arrival is after 8 a.m. Lunch is allowed if the time of arrival
        is after 1 p.m. Dinner is allowed on the last day if the time of arrival is after 7 p.m. The program should only ask for the amounts
        of allowable meals. (The company allows up to $9 for breakfast, $12 for lunch, and $16 for dinner. Anything in excess of this must
        be paid by the employee.)

    - The program should calculate and display the total expenses incurred by the businessperson, the total allowable expenses for the trip,
        the excess that must be reimbursed by the businessperson, If any.

    Input Validation:
        Do not accept negative numbers for any dollar amount or for miles driven in a private vehicle. Do not accept numbers less than 1
        for the number of days. Only accept valid times for the time of departure and the time of arrival.

 Test Data:
* Days = 3
• Departure time on Day 1 = 4 pm (16:00)
• Arrival Time on Day 3 = 10 am (10:00)
• Transportation - private car in use
• Airfare = $0, Car Rental = $0, Taxi = $0, Miles = 100, Parking = $20



 o Expenses = $47 (100* $0.27+$20)
• Allowable = $45 (100* $0.27+$6*3 days)
• Excess = $2 (Expenses> Allowable)


• Conference/Seminar Fees = $100
• Hotel (3 days / 2 nights)
• Expenses = $200
• Allowable = $180 ($90*2 nights)
• Excess = $20 (Expenses> Allowable)

• Meals (dependent on departure/arrival times)
• Day 1 = $16 (allowable; dinner only; departure before 6 pm)
• Day 2 = $37 (allowable; breakfast, lunch, dinner)
• Day 3 = $9 (allowable; breakfast only; arrival after 8 am)
• Expenses = $80
Allowable = $62

• Excess - $1B (Expenses> Allowable)


• Total Expenses = $427
• Total Allowable = $387
• Total Excess - $40
 */

#include <iostream>

using namespace std;
//the program should have functions that ask for and return the following:

double negativeCheck(int num) // Do not accept negative numbers for any dollar amount or for miles driven in a private vehicle.
{
    if (num < 0)
    {
        cout << "Please enter a positive number: " << endl
        cin >> num
        return num;
    }
    else return num;
}

int days() //asks for and returns the total number of days spent on the trip
{
    int days;
    cout << "Please enter the amount of days that you spent on the trip: " << endl;
    cin >> days;
    if (days < 1)
    {
        cout << "Please enter a number greater than 1: " << endl;
        cin >> days;
    }
    return days;
}

int timeOfADeparture(int &first)
{
    int first, last;
    cout << "Please enter the time of departure on the first day of the trip "
         << "(Please enter military time ex. 4am as 0400 vs 4pm as 1630): " << endl;
    cin >> first; //time of departure on the first day of the trip
    first = negativeCheck(first);
    while (first > 2359)
    {
        cout << "Please enter a valid military time: " << endl;
        cin >> first;
    }
    cout << "Please enter the time of departure on the last day of the trip "
         << "(Please enter military time ex. 4am as 4.00 vs 4pm as 16.30): " << endl;
    cin >> last; //time of arrival back home on the last day of the trip
    last = negativeCheck(last);
    while (last > 2359)
    {
        cout << "Please enter a valid military time: " << endl;
        cin >> last;
    }
    return last
    //note you need to return the first and last so please figure this out
}

int amountAirfare()
{
    double Airfare;
    cout << "Please enter the amount that the round trip airfair costs: " << endl;
    cin >> Airfare; //the amount of any round trip airfare
    Airfare = negativeCheck(Airfare);
    return Airfare;
}

int amountCarRental()
{
    double carRental;
    cout << "Please enter the amount of the car rental: " << endl;
    cin >> carRental; //the amount of any car rentals
    carRental = negativeCheck(carRental);
    return carRental;
}

int CarDetails()
{
    double miles;
    int privateCar;
    bool isValid = false;
    do{
        cout << "Enter a 1 if the vehicle was private or enter"
             << "        0 if the vehicle is not private " << endl;
        cin >> privateCar;  //if a private vehicle was used
        if((privateCar == 0) || (privateCar == 1)){
            isValid = true
        }
    } while (!isValid);

    if (privateCar == 1)
    {
        cout << "Please enter the amount of miles driven: " << endl;
        cin >> miles; //miles driven
        miles = negativeCheck(miles);
        double mpd = .27;
        double expense = miles * mpd;
        return expense;
    }
    //Calculate the vehicle expense as $0.27 per mile driven
    return 0;
}

void Parking(double &ParkingCost, int days,  double &overPerday)
{
    int dailyPcost = 0;
    for (int x = 0; x < days; x++)
    {
        cout << "Enter the parking fees you have for your trip for day " << (x+1) << endl;
        cin >> dailyPcost;    // parking fees
        dailyPcost = negativeCheck(dailyPcost);
        ParkingCost += dailyPcost;
        if (dailyPcost > 6)
        {
            overPerday += (dailyPcost - 6); //(The company allows up to $6 per day. Anything in excess of this must be paid by the employee)
        }
    }

}

int Taxi(int days, double &overPerday)
{
    //(The company allows up to $10 per day, for eachday a taxi was used. Anything in excess of this must be paid by the employee)
    int taxi;
    double tFees = 0;

    bool isValid = false;
    do{
        cout << "Enter 1 if you used a taxi on your trip"
             << "Enter 0 if you did not use a taxi on your trip" << endl;
        cin >> taxi;    //if a taxi was used anytime during the trip

        if ((taxi == 0) || (taxi == 1)) isValid = true;

    } while (!isValid);

    if (taxi = 1) //taxi fees
    {
        for (int x = 0 ; x < days; x++)
        {
            cout << "Please enter the taxi fees for day " << x+1 << endl;
            cin >> tFees;
            tFees = negativeCheck(tFees);
            if (tFees > 10) overPerday += (tFees - 10);
            return tFees;
        }
    }
    else return 0;
    //note you also somehow have to return the extraCost
}

int conference()
{
    double cORsFees;
    cout << "Please enter the total amount you spent on conferences or seminars: " << endl;
    cin >> cORsFees;    //conference or seminar registration fees
    cORsFees = negativeCheck(cORsFees);
    return cORsFees;
}

int hotelExpense(int days, double &overPerday)
{
    double Hotel;

    cout << "Please enter the cost of the hotel " << endl;
    cin >> Hotel; //Hotel expenses
    Hotel = negativeCheck(Hotel);

    if (Hotel > (days * 90) )  overPerday += Hotel - (days * 90);
    return Hotel;
    // you need to return the extraCost
}

int amountOfMeal(int days, int &TimeOfArrival, int DepartureTime, double &overPerday)
{
    int Fulldays = days - 2;
    double breakfast, lunch, dinner;
    double totalBreakfast, totalLunch, totalDinner;

    if (TimeOfArrival < 700)
    {
        cout << "Enter the amount for the cost of breakfast for the first day " << endl;
        cin >> breakfast;
        breakfast = negativeCheck(breakfast);
        totalBreakfast += breakfast;
        if (breakfast > 9)  overPerday += breakfast - 9;
    }
    else if (TimeOfArrival < 1200)
    {
        cout << "Enter the amount for the cost of lunch for the first day " << endl;
        cin >> lunch;
        lunch = negativeCheck(lunch);
        totalLunch += lunch;
        if (lunch > 12)  overPerday += lunch - 12;
    }
    else
    {
        cout << "Enter the amount for the cost of dinner for the first day " << endl;
        cin >> dinner;
        dinner = negativeCheck(dinner);
        totalDinner += dinner;
        if (dinner > 16)  overPerday += dinner - 16;
    }

    for (int x = 0; x < Fulldays; x++)
    {
        cout << "Enter the amount for the cost of breakfast for day "<< x + 2 << endl;
        cin >> breakfast;
        breakfast = negativeCheck(breakfast);
        totalBreakfast += breakfast;
        if (breakfast > 9)  overPerday += breakfast - 9;

        cout << "Enter the amount for the cost of lunch for day " << x + 2 << endl;
        cin >> lunch;
        lunch = negativeCheck(lunch);
        totalLunch += lunch;
        if (lunch > 12)  overPerday += lunch - 12;

        cout << "Enter the amount for the cost of dinner for day " << x+2 << endl;
        cin >> dinner;
        dinner = negativeCheck(dinner);
        totalDinner += dinner;
        if (dinner > 16)  overPerday += dinner - 16;
    }

    if (DepartureTime > 800) //breakfast is allowed if the time of arrival is after 8 a.m.
    {
        cout << "Enter the amount for the cost of breakfast for the last day "<< endl;
        cin >> breakfast;
        breakfast = negativeCheck(breakfast);
        totalBreakfast += breakfast;
        if (breakfast > 9)  overPerday += breakfast - 9;
    }
    if (DepartureTime > 1300) //Lunch is allowed if the time of arrival is after 1 p.m.
    {
        cout << "Enter the amount for the cost of lunch for the last day " << endl;
        cin >> lunch;
        lunch = negativeCheck(lunch);
        totalLunch += lunch;
        if (lunch > 12)  overPerday += lunch - 12;
    }
    if (DepartureTime > 1900) //Dinner is allowed on the last day if the time of arrival is after 7 p.m.
    {
        cout << "Enter the amount for the cost of dinner for the last day " << endl;
        cin >> dinner;
        dinner = negativeCheck(dinner);
        totalDinner += dinner;
        if (dinner > 16)  overPerday += dinner - 16;
    }

    double TotalFood = breakfast + lunch + dinner;
    return TotalFood;
    //keep in mind that you need to determine what to do with the extraCost foods;
}

int main() //Write a program that calculates and displays the total travel expenses of a buisness person on a trip
{

    double overPerday = 0;

    int TimeOfArrival= null; // holds the value of arrival the first day
    double ParkingCost = 0;

    int daysOnTrip = days(); // holds the number of days that the person is gone for

    double Departure = timeOfADeparture(TimeOfArrival); //holds the time of the departure on the last day
    double amountOfAir  amountAirfare(); //holds the value of the total airfare cost
    double CarRental = amountCarRental(); //holds the value of the total car rental


    Parking(ParkingCost, daysOnTrip, overPerday); //holds the value of parking cost

    double TaxiCost = Taxi(daysOnTrip, overPerday); //holds the value of taxi cos

    double conferenceCost = conference(); //holds the value of conference cost

    double hotelCost = hotelExpense(daysOnTrip, overPerday); //holds the value of the total cost of the hotel

    double food = amountOfMeal(daysOnTrip, TimeOfArrival, Departure, overPerday); //calculates total meal costs

    double extraCost = 0;
    double allowableExpense = 0;

    double totalExpense = amountOfAir + CarRental + ParkingCost + TaxiCost + conferenceCost + hotelCost + food;

    cout << "The total expenses incurred by the businessperson: " << totalExpense
         << "\nThe total allowable expense for the trip: " << allowableExpense << endl;
    if ((totalExpense - overPerday) > 0) cout << "\nThe excess that must be reimbursed if looking at it day by day: " << totalExpense - extraCost  << endl;
    //if ((allowableExpense - totalExpense) > 0) cout << "\nThe excess that must be reimbursed if looking at it by total allowed cost: " << allowableExpense - totalExpense << endl;

    return 0;
}
