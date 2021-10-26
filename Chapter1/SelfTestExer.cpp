#include <iostream>
#include <string>
using namespace std;

// #1
int q1() {
    int feet = 0, inches = 0;
    // or 
    /*
    int feet(0), inches(0);
    */
    return 0;
}

// #2
int q2() {
    int count = 0;
    double distance = 1.5;
    // or
    /*
    int count(0);
    double distance(1.5); 
    */
    return 0;
}


// #3
int q3() {
    int a, b, c;
    double d, e;
    char f;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;

    return 0;
}
/*
    The output is the history use of the system
    Output:
        a: 81084453
        b: 32766
        c: -316287560
        d: 0
        e: 0
        f: 
*/

// #4
int q4(int x, int y, int z) {
    double a = 3 * x;
    double b = 3 * x + y;
    double c = (x + y) / 7;
    double d = (3 * x + y) / (z + 2);
    return 0;
}

// #5
int q5() {
    char a = 'b';
    char b = 'c';
    char c = a;
    cout << a << b << c << 'c' << endl; 
    // Output: bcbc
    return 0;
}

// #6
int q6() {
    int number = (1 / 3) * 3;
    cout << "(1 / 3) * 3 is equal to " << number << endl; 
    // Output: (1 / 3) * 3 is equal to 0
    return 0;
}

// #7
int q7() {
    int a = 11, b = 25;
    cout << "b / a is " << b / a << " with remainder " << b % a << endl; 
    // Output: b / a is 2 with remainder 3
    return 0;
}

// #8
int q8() {
    double c = 20;
    double f;
    /*
    f = (9 / 5) * c + 32.0;
    cout << "The value of original f is " << f << endl;
    // a. Output: The value of origin f is 52
    // b. What is actually happening is that 9 / 5 is int and gets a result of 1 instead of 1.8
    // c. The intended code is as below:
    */
    
    f = (9.0 / 5.0) * c + 32.0;
    cout << "The value of updated f is " << f << endl;
    // Output: The value of updated f is 68
    return 0;
}

// #9
int q9() {
    cout << "The answer to the question of\n"
         << "Life, the Universe, and Everything is 42.\n";

    // Output: 
    //  The answer to the question of
    //  Life, the Universe, and Everything is 42.
    return 0;
}

// #10
int q10() {
    int theNumber;
    cout << "Please enter a whole number: ";
    // Output: Please enter a whole number: 
    cin >> theNumber;
    // Output: Please enter a whole number: 15

    cout << "The number you picked was " << theNumber << endl;
    // Output: The number you picked was 15
    return 0;
}

// #11
int q11() {
    double a;
    cout << "Please enter a long decimal number: ";
    cin >> a;
    // Output: Please enter a long decimal number: 3.3921301284
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "This is your truncated number " << a << endl;
    // Output: This is your truncated number 3.39
    return 0;
}

// #12
int q12() {
    cout << "Hello World\n";
    // Output: Hello World
    return 0;
}

// #13
int q13() {
    cout << "A\nB\tC\n";
    return 0;
    // Output:
    //  A
    //  B       C
}

// #14
int q14() {
    string firstName;
    string lastName;
    int age;
    cout << "Enter you first name." << endl;
    cin >> firstName;
    cout << "Enter you last name." << endl;
    cin >> lastName;
    cout << "Enter your age." << endl;
    cin >> age;
    cout << "You are " << age << " years old, " << firstName << " " << lastName << endl;
    /*
        Output:
            Enter you first name.
            Sunny
            Enter you last name.
            Lee
            Enter your age.
            27
            You are 27 years old, Sunny Lee
    */
    return 0;
}

// #15
int q15() {
    string s1 = "5";
    string s2 = "3";
    string s3 = s1 + s2;
    cout << s3 << endl;
    // Output: 53
    return 0;
}