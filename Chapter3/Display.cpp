#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int d3_1() {
    const double COST_PER_SQ_FT = 10.50;
    double budget, area, lengthSide;

    cout << "Enter the amount budgeted for your doghouse $";
    cin >> budget;

    area = budget / COST_PER_SQ_FT;
    lengthSide = sqrt(area);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "For a price of $" << budget << endl 
         << "I can build you a luxurious square doghouse\n" 
         << "that is " << lengthSide << " feet on each side.\n";


    return 0;
}

int d3_3() {

    cout << "Hello out there!\n";
    exit(1);

    cout << "This statement is pointless\n";

    return 0;
}

int d3_4() {
    int month, day;
    cout << "Welcome to your friendly weather program.\n"
         << "Enter today's date as two integers for the month and the day: \n";
    cin >> month;
    cin >> day;
    srand(month * day);

    int prediction;
    char ans;
    cout << "Weather for today:\n";
    do {
        prediction = rand() % 3;
        switch (prediction)
        {
        case 0:
            cout << "The day will be sunny!!\n";
            break;
        case 1:
            cout << "The day will be cloudy!!\n";
            break;
        case 2:
            cout << "The day will be stormy!!\n";
            break; 
        default:
            cout << "Weather program is no functioning properly.\n";
            break;
        }
        cout << "Want the weather for the next day? (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    cout << "That's it forn your 24-hour weather program.\n";
    return 0;
}

double totalCost(int numberParameter, double priceParameter);
int d3_5() {
    double price, bill;
    int number;

    cout << "Enter the number of items purchased: ";
    cin >> number;
    cout << "Enter the price per item $";
    cin >> price;

    bill = totalCost(number, price);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << number << " items at $" << price << " each.\n"
         << "Final bill, including tax, is $" << bill << endl;
    return 0;
}

double totalCost(int numberParameter, double priceParameter) {
    const double TAXRATE = 0.05;
    double subtotal;
    subtotal = priceParameter * numberParameter;
    return (subtotal + subtotal * TAXRATE);
}


void iceCreamDivision(int number, double totalWeight);
int d3_7() {
    int number;
    double totalWeight;
    cout << "Enter the number of customers: ";
    cin >> number;
    cout << "Enter the weight of ice cream: ";
    cin >> totalWeight;
    iceCreamDivision(number, totalWeight);

    return 0;
}

void iceCreamDivision(int number, double totalWeight) {
    double portion;
    if (number == 0) {
        cout << "Cannot divide among zero customers.\n";
        return;
    }
    portion = totalWeight / number;
    cout << "Each one receives " << portion << " ounces of ice cream.\n"; 
}

