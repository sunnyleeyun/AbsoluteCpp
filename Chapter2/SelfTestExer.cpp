#include <iostream>
using namespace std;

// #1
int q1() {
    int count = 0, limit = 10;
    // a. true
    // b. true
    // c. true
    // d. true
    // e. false
    // f. true
    // g. false
    // h. error
    // i. true
    // j. error
    // k. false
    // l. 1
    return 0;
}

// #2
int q2() {
    // 1. 2 < x < 3 looks odd but is still legal, meaning (2 < x) < 3 
    //    while (2 < x) is a bool representing 0 or 1, no matter what x is,
    //    (2 < x) could only be 0 or 1 which is always < 3
    //    thus 2 < x < 3 will only be true or 1.
    // 2. Should be (2 < x && x < 3)
    return 0;
}

// #3
int q3() {
    // x^2 - x - 2 > 0, x - 2, x + 1
    int x;
    if (x > 2 || x < -1) {
        cout << "x^2 - x - 2 > 0 \n";
    }
    return 0;
}