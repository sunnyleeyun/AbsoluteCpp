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

int q7() {
    // Wow
    return 0;
}

int q8(int, int, int); // function declaration
int q8(int a, int b, int c) { // function definition
    return a + b + c;
}

char q9(double num);
char q9(double num) {
    return num > 0 ? 'P' : 'N';
}

int q10() {
    // No, a function definition cannot appear inside the body of another function definition
    return 0;
}

int q11() {
    // A predefined function and a user-defined functin are invoked in the same way.
    return 0;
}

bool q12(int a, int b, int c);
bool q12(int a, int b, int c) { // inOrder
    return (a > b || b > c);
}

bool q13(int n);
bool q13(int n) { // even
    return n % 2 == 0;
}

bool q14(char c);
bool q14(char c) { // isDigit
    return c >= '0' && c <= '9';
}

int q15() {
    // Hello
    // Goodbye
    // One more time
    // Hello
    // End of program
    return 0;
}

int q16() {
    // The program would compile and, but there will be a runtime error since a division cannot be 0.
    return 0;
}

void show(int a, int b, int c);
int q17() {
    int a, b, c;
    cout << "Enter 3 number: \n";
    cin >> a >> b >> c;
    show(a, b, c);
    return 0;
}
void show(int a, int b, int c) {
    cout << a << " " << b << " " << c << endl;
}

int q18() {
    // The answer depends on system.
    return 0;
}

int q19() {
    // double sqrt(double n);
    // Precondition: n >= 0 
    // Postcondition: Return square of n
    return 0;
}