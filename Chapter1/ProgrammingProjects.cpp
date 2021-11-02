#include <iostream>
using namespace std;

int q1() {
    // 1 gallon = 3785.41 milliters
    double volMil;
    cout << "Enter the volume of a packet of milk in milliters:  ";
    cin >> volMil;
    cout << "The volume of milk is " << volMil / 3785.41  << " gallons." << endl;
    cout << 1 / volMil * 3785.41 << " packets are needed to yield one gallon of milk." << endl;
}