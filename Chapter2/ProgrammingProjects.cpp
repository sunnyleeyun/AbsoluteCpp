#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// #1
int q1() {
    const double INCREASE_RATE = 1.02;
    int numberOfStories;
    double basePrice, amenitiesRate, taxesRate;
    cout << "Enter the number of stories: ";
    cin >> numberOfStories;
    cout << "Enter the base price: ";
    cin >> basePrice;
    cout << "Enter the rate of amenties: ";
    cin >> amenitiesRate;
    cout << "Enter the rate of taxes: ";
    cin >> taxesRate;
    amenitiesRate /= 100;
    taxesRate /= 100;
    for (int i = 0; i < numberOfStories; i++) {
        double curBasePrice = basePrice * pow(INCREASE_RATE, i);
        cout << "Floor " << i + 1 << "th: \n" 
                         << "\tBase price: " << curBasePrice << endl
                         << "\tCharges on amenities: " << curBasePrice * amenitiesRate << endl
                         << "\tCharges on taxes: " << curBasePrice * taxesRate << endl
                         << "\tTotal price of the appartment: " << curBasePrice * (1 + amenitiesRate + taxesRate) << endl;
    }
    return 0;
}

// #2
int q2() {
    double initDeposit, interestRate, withDraw;
    cout << "Enter the initial deposit: ";
    cin >> initDeposit;
    cout << "Enter the bank's interest rate per month: ";
    cin >> interestRate;
    cout << "Enter the fixed withdrawn every month: ";
    cin >> withDraw;
    
    if (initDeposit * interestRate / 100 >= withDraw) {
        cout << "You could survive forever with this initial deposit.\n" ;
    } else {
        int month = 0;
        while (initDeposit >= withDraw)
        {
            month++;
            initDeposit -= withDraw;
            initDeposit *= 1 + interestRate / 100;
        }
        cout << "You could survive " << month << " month with the initial deposit.\n";
    }
    return 0;
}

// #3
int q3() {
    int oneAmount, willingAmount;
    cout << "Enter the amount required for one child's education: ";
    cin >> oneAmount;
    cout << "Enter the amount that you could sponsor: ";
    cin >> willingAmount;
    int total = 0;
    do
    {
        total++;
        willingAmount -= oneAmount;
    } while (willingAmount > 0);
    cout << "This amount could sponsor " << (willingAmount == 0 ? total : total - 1) << " children.\n"
         << (willingAmount == 0 ? oneAmount : -willingAmount) << " more dollars would educate another child.\n";
    return 0;
}

// #4
int q4() {
    for (int i = 3; i <= 100; i++) {
        bool isPrime = true;
        for (int j = 2; j <= i - 1; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

// #5
int q5() {
    // T, O, G, D
    // TOO + TOO + TOO + TOO = GOOD
    // 4 * TOO = GOOD 
    // G != 0, T != 0
    int i, j, k, l;
    for (i = 1; i < 10; i++) { // T

        for (j = 0; j < 10; j++) { // O
            if (i == j) continue;

            for (k = 1; k < 10; k++) { // G
                if (i == k || j == k) continue;

                for (l = 0; l < 10; l++) { // D
                    if (i == l || j == l || k == l) continue;
                    if (4 * (i * 100 + j * 10 + j) == k * 1000 + j * 100 + j * 10 + l) {
                        cout << "T: " << i << endl
                             << "O: " << j << endl
                             << "G: " << k << endl
                             << "D: " << l << endl;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}

// #6
int q6() {
    const double PI = atan(1) * 4;
    const double MU = 62.4;
    double weight, radius;
    cout << "Enter weight in pounds: ";
    cin >> weight;
    cout << "Enter radius is feet: ";
    cin >> radius;
    if (4.0 / 3.0 * PI * pow(radius, 3) * MU >= weight) {
        cout << "FLOAT\n";
    } else {
        cout << "SINK\n";
    }
    return 0;
}

// #7
int q7() {
    enum Grades { S = 10, A = 9, B = 8, C = 7, D = 6, E = 5, F = 0};
    int n;
    char grade;
    cout << "Enter total subjects: ";
    cin >> n;
    int accGrade = 0;
    for (int i = 0; i < n; i++) {
        cout << "Enter Grade: ";
        cin >> grade;
        switch (grade)
        {
        case 'S':
        case 's':
            accGrade += Grades::S;
            break;
        case 'A':
        case 'a':
            accGrade += Grades::A;
            break;
        case 'B':
        case 'b':
            accGrade += Grades::B;
            break;
        case 'C':
        case 'c':
            accGrade += Grades::C;
            break;
        case 'D':
        case 'd':
            accGrade += Grades::D;
            break;
        case 'E':
        case 'e':
            accGrade += Grades::E;
            break;
        case 'F':
        case 'f':
            accGrade += Grades::F;
            break;
        default:
            cout << "The grade you entered was not valid, please re-enter the grade.\n";
            i--;
            break;
        }
    }
    cout << "Average is " << accGrade * 1.0 / n << endl;
    return 0;
}

// #8
int q8() {
    double c = 100, f = c * 9 / 5 + 32;
    // cout << "Enter a celius degree: ";
    // cin >> c;
    // cout << "Enter a fahrenheit degree: ";
    // cin >> f;
    while (c != f) {
        c--;
        f = c * 9 / 5 + 32;
        if (f == c) {
            break;
        }
    }
    cout << "Magic number is " << c << endl; 
    return 0;
}

// #9
int q9() {
    double n;
    cout << "Enter a number: ";
    cin >> n;
    double guess = n / 2, prevGuess, r;
    do {
        prevGuess = guess;
        r = n / guess;
        guess = (guess + r) / 2;
    } while (abs(guess - prevGuess) > 0.01);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The answer is " << r << endl;
    return 0;
}

// #10
int q10() {
    fstream inputStream;
    inputStream.open("loveCpp.txt");
    string text;
    while (inputStream >> text) {
        if (text == "hate") {
            text = "love";
        }
        cout << text << " ";
    }
    cout << endl;
    inputStream.close();
    return 0;
}

// #11
int q11() { // TODO
    string text, firstName, lastName;
    int ft, in, i = 0;
    fstream inputStream;
    inputStream.open("calWeight.txt");
    
    while (inputStream >> text) {
        if (i % 4 == 2) {
            ft = stoi(text);
        } else if (i % 4 == 3) {
            in = stoi(text);
        } else {
            if (i % 4 == 0) {
                firstName = text;
            } else {
                lastName = text;
            }
        }
        i++;
        if ((i - 1) % 4 != 3) 
            continue;
        
        double p = 0;
        p += (ft < 5 ? 110 / 5 * ft : 110);
        ft -= 5;
        while (ft > 0) {
            in += 12;
            ft -= 1;
        }
        p += in * 5;
        cout << firstName << " " << lastName << "'s ideal body weight is " << p << endl;
    }

    inputStream.close();
    return 0;
}

// #12
int q12() {
    int n;
    int nums[9] = { 0 };
    fstream inputStream;
    inputStream.open("bendordData.txt");
    while (inputStream >> n) {
        nums[n - 1]++;
    }
    for (int i = 0; i < 9; i++) {
        cout << i + 1 << " appears " << nums[i] / 20.0 * 100.0 << "%\n";
    }
    inputStream.close();
    return 0;
}

// #13
int q13() {
    int n, nums[10], i = 0, inNum;
    fstream inputStream;
    inputStream.open("nums.txt");
    while (inputStream >> n) {
        nums[i++] = n;
    }
    cout << "Enter a number: ";
    cin >> inNum;
    bool pairFound = false;
    for (i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (nums[i] + nums[j] == inNum) {
                pairFound = true;
                cout << "{ " << nums[i] << ", " << nums[j] << " } ";
            }
        }
    }
    if (!pairFound) cout << "No pair found.";
    cout << endl;
    inputStream.close();
    return 0;
}