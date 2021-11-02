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

// #6
int q6() {
    double d, t;
    cout << "Enter distance: ";
    cin >> d;
    cout << "Enter time: ";
    cin >> t;
    double r = 2 + 0.2 * t;
    d -= 2;
    if (d > 0) {
        if (d - 6 > 0) {
            r += 1 * (d - 6) + 0.5 * 6;
        } else {
            r += 0.5 * d;
        }
    }
    cout << "The fare is " << r << endl;
    return 0;
}

// #7
int q7() {
    double weight;
    cout << "Enter the weight: ";
    cin >> weight;
    double total = 15;
    double r = 0, s = 4;
    // first 3 min
    r += s * 3;
    total -= 3;
    // the rest of the minutes
    while (total > 0) {
        s += 2;
        r += s * (total - 4 < 0 ? total : 4);
        total -= 4;
    }

    r = 0.0175 * r * 10 / 6 * weight;
    cout << "Calories burned: " << r << endl;
    return 0;
}

// #8
int q8() {
    double n;
    cout << "Enter a number: ";
    cin >> n;
    double guess = n / 2, r;
    for (int i = 0; i < 5; i++) {
        r = n / guess;
        guess = (guess + r) / 2;
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The answer is " << r << endl;
    return 0;
}

// #9
int q9() {
    int coupon;
    cout << "Enter the number of coupon: ";
    cin >> coupon;
    int c = coupon / 10;
    int g = coupon % 10 / 3;
    cout << "You have " << c << " candy bars and " << g << " gumballs.\n";
    return 0;
}

// #10
int q10() {
    double s, t;
    cout << "Enter the speed: "; // speed in miles / h
    cin >> s;
    cout << "Enter the time: "; // time in hours
    cin >> t;
    s = s / 3600 * 1609.344; // speed in m / s
    t = t * 3600; // time in seconds
    cout << "The distance is " << s * t << " meters. \n";
    return 0;
}