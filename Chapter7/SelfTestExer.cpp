#include <iostream>
using namespace std;

// #1
int q1() {
    // 1, 2, 4, 5 is legal
    return 0;
}

// #2
int q2() {
    // A default constructor is a constructor that takes no argument.
    // Not every class has a default constructor.
    return 0;
}

// #3
int q3() {

    return 0;
}
// void BankAccount::input()
// {
//     int dollars;
//     char point, digit1, digit2;
//     cpit >> "Enter account balance (include cents even if .00) $";
//     cin >> dollars;
//     cin >> point >> digit1 >> digit2;
//     accountDollars = dollars;
//     accountCents = digitToInt(digit1 * 10 + digitToInt(digit2));
//     if (accountDollars < 0)
//         accountCents = -accountCents;
//     cout << "Enter interest rate (NO percent sign): ";
//     cin >> rate;
//     setRate(rate);
// }
// int BankAccount::digitToInt(char digit)
// {
//     return (static_cast<int>(digit) - static_cast<int>('0'));
// }

// #4
int q4() {
    // Because input() would change the value of the calling object
    return 0;
}

// #5
int q5() {
    // call by value paramter would copy the value
    // call by reference parameter would not copy the value, thus more efficient.
    // Both protect the argument from being changed
    return 0;
}

// #6
int q6() {
    // const int x = 17 -> x should not be changed
    // int f() const; -> the calling object's value should not be changed
    // int g(const A& x); -> parameter x would not be changed
    return 0;
}

// #8
int q8() {
    // No, becaure char name is not a static member
    return 0;
}

// #9
int q9()) {
    // 0 1 2 3 4 5 6 7 8 9
    return 0;
}

// #10
int q10()) {
    // size is the number of the vector, capacity is the memory allocated number of the vector
    return 0;
}