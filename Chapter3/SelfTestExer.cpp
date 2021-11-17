#include <iostream>
#include <cmath>
using namespace std;

int q1() {
    // 4.0  4.0  8.0
    // 8.0  8.0  1.21
    // 3    3    0
    // 3.0  3.5  3.5
    // 6.0  6.0  5.0
    // 5.0  4.5  4.5
    // 3    3.0  3.0
    return 0;
}

int q2() {
    // a. sqrt(x + y)
    // b. pow(x, y + 7)
    // c. sqrt(area + fudge)
    // d. sqrt(time + ride) / nobody
    // e. (-b +- sqrt(pow(b, 2) - 4 * a * c)) / 2 * a
    // f. abs(x - y)
    return 0;
}

int q3() {
    for (int i = 1; i <= 10; i++) {
        cout << sqrt(i) << endl;
    }
    return 0;
}

int q4() {
    // exit(1);
    return 0;
}

int q5() {
    cout << rand() % 6 + 5 << endl;
    return 0;
}

int q6() {
    for (int i = 0; i < 10; i++) {
        cout << (RAND_MAX - rand()) / static_cast<double>(RAND_MAX) << endl;
    }
    return 0;
}