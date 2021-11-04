#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// #2.4
int d2_4() {
    int countDown;
    cout << "How many greetings do you want? ";
    cin >> countDown;
    while (countDown > 0)
    {
        cout << "Hello ";
        countDown -= 1;
    }
    cout << endl;
    cout << "That's all!\n";
    return 0;
}

// #2.5
int d2_5() {
    int countDown;
    cout << "How many greetings do you want? ";
    cin >> countDown;
    do {
        cout << "Hello ";
        countDown -= 1;
    } while (countDown > 0);
    cout << endl;
    cout << "That's all!\n";
    return 0;
}

// #2.6
int q2_6() {
    int numberOfItems, count, caloriesForItem, totalCalories;
    cout << "How many items did you eat today? ";
    cin >> numberOfItems;
    totalCalories = 0;
    count = 1;
    cout << "Enter the number of calories in each of the\n" << numberOfItems << " items eaten:\n";
    while (count++ <= numberOfItems) 
    {
        cin >> caloriesForItem;
        totalCalories += caloriesForItem;
    }
    cout << "Total calories eaten today = " << totalCalories << endl;
    return 0;
}

// #2.8
int q2_8() {
    int number, sum = 0, count = 0;
    cout << "Enter 4 negative numbers: \n";
    while (++count <= 4) {
        cin >> number;
        if (number >= 0) {
            cout << "ERROR: positive number or zero was entered as the \n"
                 << count << "th number! Input ends "
                 << "with the " << count << "th number.\n"
                 << count << "th number was not added in.\n";
            break;
        }
        sum += number;
    }
    cout << sum << " is the sum of the first " << (count - 1) << "numbers.\n";
    return 0;
}

// #2.9
int q2_9() {
    int number, sum = 0, count = 0;
    cout << "Enter 4 negative numbers: \n";
    while (count < 4) {
        cin >> number;
        if (number >= 0) {
            cout << "ERROR: positive number or zero was entered! \n"
                 << "Reenter that number and continue: ";
            continue;
        }
        sum += number;
        count++;
    }
    cout << sum << " is the sum of the first " << count << " numbers.\n";
    return 0;
}

// #2.11
int q2_11() {
    string firstName, lastName;
    int score;
    fstream inputStream;

    inputStream.open("player.txt");

    inputStream >> score;
    inputStream >> firstName >> lastName;

    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Score: " << score << endl;
    inputStream.close();

    return 0;
}

// #2.12
int q2_12() {
    string text;
    fstream inputStream;

    inputStream.open("player.txt");

    while (inputStream >> text) {
        cout << text << endl;
    }
    inputStream.close();
    return 0;
}
