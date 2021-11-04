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

// #12
int q12() {
    // large
    return 0;
}

// #13
int q13() {
    // small
    return 0;
}

// #14
int q14() {
    // medium
    return 0;
}

// #15
int q15() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0) {
        cout << "n is less than 0\n";
    } else if (n <= 100) {
        cout << "n is greater than or equal to 0 but less than or equal to 100\n";
    } else {
        cout << "n is greater than 100\n";
    }
    return 0;
}

// #16
int q16() {
    // 3 2 1 0
    return 0;
}

// #17
int q17() {
    // 2 1 7 5
    return 0;
}

// #18
int q18() {
    // 2 1 0
    return 0;
}

// #19
int q19() {
    // 2 1
    return 0;
}

// #20
int q20() {
    // 1 2 3 4
    return 0;
}

// #21
int q21() {
    // 1 2 3
    return 0;
}

// #22
int q22() {
    // 10
    // 7
    // 4
    // 1
    return 0;
}

// #23
int q23() {
    // no output
    return 0;
}

//#24
int q24() {
    // 10
    // 7
    // 4
    // 1
    return 0;
}

// #25
int q25() {
    // -42
    return 0;
}

// #26
int q26() {
    // The main important difference between a while statement and a do-while statement
    // is that a do-while statement's loop body runs at least once 
    // and a while statement might not execute at all.
    return 0;
}

// #27
int q27() {
    // 2 4 6 8 
    return 0;
}

// #28
int q28() {
    // Hello 10
    // Hello 8
    // Hello 6
    // Hello 4
    // Hello 2
    return 0;
}

// #29
int q29() {
    // 2.000000 1.500000 1.000000 0.500000 
    return 0;
}

// #30
int q30() {
    int i;
    // a
    for (i = 1; i <= 10; i++) {
        if (i < 5 && i != 2) {
            cout << 'X';
        }
    }

    // b
    for (i = 1; i <= 10; i+=3) {
        cout << 'X';
    }

    // c*
    long n;
    cout << 'X'; // essential
    for (n = 100; n < 1000; n+=100) {
        cout << 'X';
    }
    return 0;
}

// #31 
int q31() {
    // 1024 10
    // 1024 is 2^10
    return 0;
}

// #32
int q32() {
    // 1024 1
    // There's a semicolon at the for loop line
    return 0;
}