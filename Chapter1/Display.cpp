#include <iostream>
#include <string>
using namespace std;

// #1.1
int d1_1() {
    int numberOfLanguages;

    cout << "Hello reader.\n"
         << "Welcome to C++\n";

    cout << "How many programming languages have you used? ";
    cin >> numberOfLanguages;

    if (numberOfLanguages < 1) 
        cout << "Read the preface. You may prefer\n"
             << "a more elementary book by the same author.\n";
    else 
        cout << "Enjoy the book.\n";
    
    return 0;
}

// #1.5
int d1_5() {
    const double RATE = 6.9;
    double deposit;

    cout << "Enter the amount of your doposit $";
    cin >> deposit;

    double newBalance;
    newBalance = deposit + deposit * (RATE / 100);
    cout << "In one year, that deposit will grow to \n"
         << "$" << newBalance << " an amount worth waiting for.\n";
    return 0;
}

// #1.6
int main() {
    string dogName;
    int actualAge;
    int humanAge;

    cout << "How many years old is your dog?" << endl;
    cin >> actualAge;
    humanAge = actualAge * 7;

    cout << "What is your dog's name?" << endl;
    cin >> dogName;

    cout << dogName << "'s age is approx. "
         << "equivalent to a " << humanAge << " year old human." << endl;
    return 0;
}
/*
    output:
    /////
    How many years old is your dog?
    5
    What is your dog's name?
    Rex
    Rex's age is approx. equivalent to a 35 year old human.
    /////
    How many years old is your dog?
    10
    What is your dog's name?
    Mr. Bojangles
    Mr.'s age is approx. equivalent to a 70 year old human. 
    --> Bojangles is not read into donName because cin stops input at the space
*/

