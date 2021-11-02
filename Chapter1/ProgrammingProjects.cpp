#include <iostream>
using namespace std;

// #1
int q1() {
    // 1 gallon = 3785.41 milliters
    double volMil;
    cout << "Enter the volume of a packet of milk in milliters:  ";
    cin >> volMil;
    cout << "The volume of milk is " << volMil / 3785.41  << " gallons." << endl;
    cout << 1 / volMil * 3785.41 << " packets are needed to yield one gallon of milk." << endl;
    return 0;
}

// #2
int q2() {
    const double rate = 0.001;   
    double sweetKillMouse, mouse, dieter;
    cout << "Enter the amount of sweet that kills a mouse: ";
    cin >> sweetKillMouse;
    cout << "Enter the weight of a mouse: ";
    cin >> mouse;
    cout << "Enter your target weight with which you would never go below: ";
    cin >> dieter;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout << "You may drink " << sweetKillMouse * dieter / mouse / rate << " sodas." << endl;
    return 0;
}

// #3
int q3() {
    const double salesInc = 1.13;
    const double profitInc = 1.27;
    double prevSales, prevProfit;
    cout << "Enter previous sales in millions: ";
    cin >> prevSales;
    cout << "Enter previous profit in millions: ";
    cin >> prevProfit;
    cout << "Increased sales amount is " << prevSales * salesInc << " millions.\n";
    cout << "Increased profit amount is " << prevProfit * profitInc << " millions.\n";
    return 0;
}

// #4
int q4() {
    double customerNeed, interestRate, duration, faceValue;
    cout << "Enter the amount customer need: ";
    cin >> customerNeed;
    cout << "Enter the interest rate: ";
    cin >> interestRate;
    cout << "Enter the duration in month: ";
    cin >> duration;
    faceValue = customerNeed / (1 - interestRate / 100 * duration / 12);
    cout << "Face value is " << faceValue << endl;
    cout << "Monthly payment is " << faceValue / duration << endl;

    return 0;
}

// #5
int q5() {
    double maxCap, boxNum, avgWeiBox;
    cout << "Enter the truck's maximum capacity: ";
    cin >> maxCap;
    cout << "Enter the number of boxes the truck is carrying: ";
    cin >> boxNum;
    cout << "Enter the average weight of the boxes: ";
    cin >> avgWeiBox;
    if (boxNum * avgWeiBox <= maxCap) {
        cout << "The truck can legally carry all boxes, and can add " << int((maxCap - boxNum * avgWeiBox) / avgWeiBox) << " more.\n";
    }
    else {
        cout << "The truck is overloaded and should remove " << int((boxNum * avgWeiBox - maxCap) / avgWeiBox) << " boxes.\n";
    }

    return 0;
}
