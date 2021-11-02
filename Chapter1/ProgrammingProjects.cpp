#include <iostream>
using namespace std;

int q1() {
    // 1 gallon = 3785.41 milliters
    double volMil;
    cout << "Enter the volume of a packet of milk in milliters:  ";
    cin >> volMil;
    cout << "The volume of milk is " << volMil / 3785.41  << " gallons." << endl;
    cout << 1 / volMil * 3785.41 << " packets are needed to yield one gallon of milk." << endl;
    return 0;
}

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
