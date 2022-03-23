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
    if (num < 0) //checks to see if the number is less than 0
    {
        cout << "\nPlease enter a positive number: "; //asks the user to reenter a positive number
        cin >> num; //takes the value the user entered
        return num; //returns the new positive value
    }
    else return num; //returns the same number that was passed into this function
}

int days() //asks for and returns the total number of days spent on the trip
{
    int days; //Hold the value for the number of days that the buisiness person is on the trip
    cout << "\nPlease enter the amount of days that you spent on the trip: "; //asks user to enter how many days they  were on the trip
    cin >> days; //hold the input the user enters for the amount of days on vacation
    if (days < 1) //validation to make sure the user enters at least one day for the trip
    {
        cout << "\nPlease enter a number greater than 1: "; //asks the user to enter a number
        cin >> days; //holds the value the user enters
    }
    return days; //returns the amount of days the usserr enters
}

int timeOfADeparture(int &first)
{
    int  last; //holds the value for the departure time
    cout << "\nPlease enter the time of departure on the first day of the trip "
         << "\n      (Please enter military time ex. 4am as 400 vs 4:30pm as 1630): "; //asks the user to enter the departure time
    cin >> first; //time of departure on the first day of the trip
    first = negativeCheck(first); //checks to make sure the value entered is not negative
    while (first > 2359) //validates the time entered
    {
        cout << "\nPlease enter a valid military time: "; //asks user to enter a correct time
        cin >> first; //takes the input the user entered
    }
    cout << "\nPlease enter the time of arrival on the last day of the trip "
         << "\n      (Please enter military time ex. 4am as 400 vs 4:30pm as 1630): "; //asks the user to enter the arrival time
    cin >> last; //holds the time of arrival back home on the last day of the trip
    last = negativeCheck(last); // checks to make sure that the number entered is a positive number
    while (last > 2359) //validates the arrival time
    {
        cout << "\nPlease enter a valid military time: " ; //Has the user enter a valid time
        cin >> last; //intakes the user input
    }
    return last; //returns the arrival time
    //note you need to return the first and last so please figure this out
}

double amountAirfare(double &allowence) //Finds the amount that the aiirfare costs and returns it
{
    double Airfare; //holds the cost of the airfare
    cout << "\nPlease enter the amount that the round trip airfair costs: "; //asks the user to enter the airfare cost
    cin >> Airfare; //the amount of any round trip airfare
    Airfare = negativeCheck(Airfare); //checks that the value entered is a positive number
    allowence += Airfare; //adds the airfare cost to the allowence
    return Airfare; //returns the airfare cost
}

double amountCarRental(double &allowence) //Finds the amount that the car rental costs and returns it
{
    double carRental; //holds the value of the total car rental
    cout << "\nPlease enter the amount of the car rental: "; //asks the user to enter a value
    cin >> carRental; //the amount of any car rentals
    carRental = negativeCheck(carRental); //checks to make sure that the value entered is positive
    allowence += carRental; //adds the car rental cost to the allowence
    return carRental; //returns the car rental cost
}

double CarDetails(double &allowence) //returns the private car miles cost
{
    double miles; //holds the value for the amount of miles driven
    int privateCar; //holds 1 or 0 to determine if a car is private or not
    bool isValid = false; //the input is not valid until proven otherwise
    do{
        cout << "\nEnter a 1 if the vehicle is private"
             << "\nEnter a 0 if the vehicle is not private: "; //has the user enter a value cordinating if the car is private or not private
        cin >> privateCar;  //if a private vehicle was used
        if((privateCar == 0) || (privateCar == 1)) isValid = true; // if the number entered is 1 or 0 then the input is valid
    } while (!isValid); //validates the input

    if (privateCar == 1) // if the car is private then this statement is run
        //Calculate the vehicle expense as $0.27 per mile driven
    {
        cout << "\nPlease enter the amount of miles driven: "; //asks the user to enter the amount of hours
        cin >> miles; // holds the value the user enters for the amount of miles they have driven
        miles = negativeCheck(miles); //checks to make sure the value entered is positive
        double mpd = .27; //variable that holds the cost per mile
        double expense = miles * mpd; //finds the expense that it costs per mile times the amount of miles driven
        allowence += expense; //adds the car expense to the allowence
        return expense; //returns the car expense
    }

    return 0;
}

void Parking(double &ParkingCost, double &TotalCost, double &allowence, int days) //finds the cost of parking
{
    cout << "\nEnter the parking fees you have for your trip: "; //asks the user to enter the parking fees for the trip
    cin >> ParkingCost;    // holds the value the user entered for the parking fees
    ParkingCost = negativeCheck(ParkingCost); //checks to make sure the value entered is positive
    allowence += days * 6; //adds the days the person is on vacation times 6 to find the allowence
    if (ParkingCost > (6*days)) TotalCost += (ParkingCost - (6*days)); //finds the cost that the user has gone over //(The company allows up to $6 per day. Anything in excess of this must be paid by the employee)
}

double Taxi(double &TotalCost, double &allowence, int days) //returns the amount that the taxi costs
{
    //(The company allows up to $10 per day, for eachday a taxi was used. Anything in excess of this must be paid by the employee)
    int taxi; //holds the value to see if the taxi was used or not
    double tFees = 0; //holds the value of the cost of the taxi

    bool isValid = false; //the input is not valid until this variable is changed
    do{
        cout << "\nEnter 1 if used a Taxi "
             << "\nEnter 0 if no taxi was used: "; //asks the user if a taxi was used on their trip
        cin >> taxi;    // holds the value the user enters for if a taxi was used anytime during the trip
        if ((taxi == 0) || (taxi == 1)) isValid = true; //if the user enters a 1 or 0 then this loop is broken
    } while (!isValid);


    if (taxi == 1) //If the user says they use a taxi this encapsulation is executed
    {
        cout << "\nPlease enter the taxi fees: "; //asks the user to enter the cost of all the taxi fees
        cin >> tFees; //holds the input the user enters for the taxi fees
        tFees = negativeCheck(tFees); //checks to make sure that the user entered a positive value
        allowence += days * 10; // if a taxi is used then the allowwence is added for each day
        if (tFees > 10) TotalCost += (tFees - 10); //calculates the total cost that needs to be Reimbersmented
        return tFees; //returns the value of the taxi cost
    }
    return 0; //if no taxi is used the return value is 0
}

double conference(double &allowence) //returns the amount that the conference was
{
    double cORsFees; //holds the value that the user enters for the amount that was spent on conferences or seminars
    cout << "\nPlease enter the total amount you spent on conferences or seminars: "; //asks the user to enter a value
    cin >> cORsFees;    //holds the value the users enters for conference or seminar registration fees
    cORsFees = negativeCheck(cORsFees); //checks to make sure the value entered if positive
    allowence += cORsFees; //adds the amount spend to the allowence
    return cORsFees; //returns the amount speant
}

double hotelExpense(int days, double &TotalCost, double &allowence) //returns the cost that wwas spent at the hotel
{
    double Hotel; //holds the valuse of the cost of the hotel
    int nights = days - 1; //calulates the amount of nightss spent at the hotel
    cout << "\nPlease enter the total cost of the hotel: "; //asks the user to enter a value
    cin >> Hotel; //holds the value the usser enters for the Hotel expenses
    Hotel = negativeCheck(Hotel);// makes sure the value entered is positive

    if (Hotel > (nights * 90) )  TotalCost += Hotel - (nights * 90); //adds money too the amount of money the person went over the allowence if any
    allowence += nights * 90; //calculates the hotel allowence
    return Hotel; //returns the Total cost of the hotel
}

double amountOfMeal(int days, int &TimeOfArrival, int DepartureTime, double &TotalCost, double &allowence) //returns the total cost of food for the trip
{
    int Fulldays = days - 2; //finds how many full days the person ate at the trip
    double breakfast, lunch, dinner; //holds how much dinner lunch and dinner the professor ate
    double totalFood = 0; //holds the cost of foods all together

    if (TimeOfArrival < 700) //if the person leaves beofre 7:00 am
    {
        cout << "\nEnter the cost of breakfast for the first day: "; //asks for the user to enter how much breakfast cost
        cin >> breakfast; //holds the value that the user entered for breakfast cost
        breakfast = negativeCheck(breakfast); //checks to make sure the value entered was positive
        totalFood += breakfast; // adds the cost of breakfast spent to the total food cost
        allowence += 9; //adds the allowed amount to the allowence
        if (breakfast > 9)  TotalCost += breakfast - 9; // adds the amount the person went over to the total oveer variable
    }
    else if (TimeOfArrival < 1200) //if the person leaves before 12:00 am
    {
        cout << "\nEnter the cost of lunch for the first day: "; //asks for the user to enter how much lunch cost
        cin >> lunch;//holds the value that the user entered for lunch cost
        lunch = negativeCheck(lunch);//checks to make sure the value entered was positive
        totalFood += lunch;// adds the cost of lunch spent to the total food cost
        allowence += 12;//adds the allowed amount to the allowence
        if (lunch > 12)  TotalCost += lunch - 12;// adds the amount the person went over to the total over variable
    }
    else
    {
        cout << "\nEnter the cost of dinner for the first day: "; //asks for the user to enter how much dinner cost
        cin >> dinner; //holds the value that the user entered for lunch cost
        dinner = negativeCheck(dinner);//checks to make sure the value entered was positive
        totalFood += dinner; // adds the cost of lunch spent to the total food cost
        allowence += 16; //adds the allowed amount to the allowence
        if (dinner > 16)  TotalCost += dinner - 16; // adds the amount the person went over to the total over variable
    }

    for (int x = 0; x < Fulldays; x++) //runs for every full day the person is on the trip
    {
        cout << "\nEnter the cost of food for day "<< x + 2 << ": "; //asks the user to enter the amount of food per day they were there
        cin >> dinner; //has the user enter the total amount of food that was spent per day
        dinner = negativeCheck(dinner); //makes sure the value entered is positive
        totalFood += dinner; //adds the cost of dinner to the total food value
        allowence += 37; //adds 37 to allowence because thats how much is allowed per day
        if (dinner > 37)  TotalCost += dinner - 37; //adds up how much the person went over and adds up the days
    }
    if (DepartureTime > 800) //breakfast is allowed if the time of arrival is after 8 a.m.
    {
        cout << "\nEnter the cost of breakfast for the last day: "; //asks for the user to enter how much breakfast cost
        cin >> breakfast; //holds the value that the user entered for breakfast cost
        breakfast = negativeCheck(breakfast); //checks to make sure the value entered was positive
        totalFood += breakfast; // adds the cost of breakfast spent to the total food cost
        allowence += 9; //adds the allowed amount to the allowence
        if (breakfast > 9)  TotalCost += breakfast - 9; // adds the amount the person went over to the total oveer variable
    }
    if (DepartureTime > 1300) //Lunch is allowed if the time of arrival is after 1 p.m.
    {
        cout << "\nEnter the cost of lunch for the last day: "; //asks for the user to enter how much lunch cost
        cin >> lunch;//holds the value that the user entered for lunch cost
        lunch = negativeCheck(lunch);//checks to make sure the value entered was positive
        totalFood += lunch;// adds the cost of lunch spent to the total food cost
        allowence += 12;//adds the allowed amount to the allowence
        if (lunch > 12)  TotalCost += lunch - 12;// adds the amount the person went over to the total over variable
    }
    if (DepartureTime > 1900) //Dinner is allowed on the last day if the time of arrival is after 7 p.m.
    {
        cout << "\nEnter the cost of dinner for the last day: "; //asks for the user to enter how much dinner cost
        cin >> dinner; //holds the value that the user entered for lunch cost
        dinner = negativeCheck(dinner);//checks to make sure the value entered was positive
        totalFood += dinner; // adds the cost of lunch spent to the total food cost
        allowence += 16; //adds the allowed amount to the allowence
        if (dinner > 16)  TotalCost += dinner - 16; // adds the amount the person went over to the total over variable
    }
    return totalFood; //returns the total cost of all food
}

int main() //Write a program that calculates and displays the total travel expenses of a buisness person on a trip
{

    double TotalCost = 0; //holds the total of the amount the person went over
    double allowence = 0; //holds the value of the allowed expense

    int TimeOfArrival= 8888; // holds the time value of arrival the first day
    int daysOnTrip = days(); // holds the number of days that the person is gone for

    double Departure = timeOfADeparture(TimeOfArrival); //holds the time of the departure on the last day
    double amountOfAir = amountAirfare(allowence); //holds the value of the total airfare cost
    double CarRental = amountCarRental(allowence); //holds the value of the total car rental

    double CarExtraCost = CarDetails(allowence);
    double ParkingCost = 0;
    Parking(ParkingCost, TotalCost, allowence, daysOnTrip); //holds the value of parking cost

    double TaxiCost = Taxi( TotalCost, allowence, daysOnTrip); //holds the value of taxi cos

    double conferenceCost = conference(allowence); //holds the value of conference cost

    double hotelCost = hotelExpense(daysOnTrip, TotalCost,allowence); //holds the value of the total cost of the hotel

    double food = amountOfMeal(daysOnTrip, TimeOfArrival, Departure, TotalCost, allowence); //calculates total meal costs

    double extraCost = 0;
    double allowableExpense = 0;

    double totalExpense = CarExtraCost + amountOfAir + CarRental + ParkingCost + TaxiCost + conferenceCost + hotelCost + food;

    cout << "CarExtraCost: " << CarExtraCost <<
         "\n amountOfAir: " << amountOfAir <<
         "\n CarRental: " << CarRental <<
         "\n ParkingCost: " << ParkingCost <<
         "\n TaxiCost: " << TaxiCost <<
         "\n conferenceCost: " << conferenceCost <<
         "\n hotelCost: " << hotelCost <<
         "\n food: " << food;

    cout << "\n Total expenses: " << totalExpense
         << "\n Allowence: " << allowence;
    if ((TotalCost) > 0) cout << "\n Reimbersments: " << TotalCost;
    return 0;
}