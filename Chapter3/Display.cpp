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