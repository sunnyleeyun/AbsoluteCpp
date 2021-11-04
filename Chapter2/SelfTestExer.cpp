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

// #4
int q4() {
    // x^2 - 4x + 3 < 0, x - 3, x - 1
    int x;
    if (x > 1 && x < 3) {
        cout << "x^2 - 4x + 3 < 0 \n";
    }
    return 0;
}

// #5
int q5() {
    // no
    return 0;
}

// #6
int q6() {
    int score;
    cout << "Input your score: ";
    cin >> score;
    if (score > 100) {
        cout << "High\n";
    } else {
        cout << "Low\n";
    }
    return 0;
}

// #7
int q7() {
    double savings, expenses;
    cout << "Enter savings: ";
    cin >> savings;
    cout << "Enter expenses: ";
    cin >> expenses;
    if (savings < expenses) {
        cout << "Bankrupt\n";
    } else {
        cout << "Solvent\n";
        savings -= expenses;
        expenses = 0;
    }
    return 0;
}

// #8
int q8() {
    int exam, programsDone;
    cout << "Enter your exam score: ";
    cin >> exam;
    cout << "Enter your done programs: ";
    cin >> programsDone;
    if (exam >= 60 && programsDone >= 10) cout << "Passed\n";
    else cout << "Failed\n";
    return 0;
}

// #9
int q9() {
    int temperature, pressure;
    cout << "Enter temperature: ";
    cin >> temperature;
    cout << "Enter pressure: ";
    cin >> pressure;
    if (temperature >= 100 || pressure >= 200) cout << "Warning\n";
    else cout << "OK\n";
    return 0;
}

// #10
int q10() {
    // a. 0 is false
    // b. 1 is true
    // c. -1 is true
    return 0;
}

// #11
int q11() {
    // Start
    // Hello from the second if.
    // End
    // Start again
    // End again
    return 0;
}

// #q12
int q12() {
    // large
    return 0;
}

// #q13
int q13() {
    // small
    return 0;
}


// #q14
int q14() {
    // medium
    return 0;
}