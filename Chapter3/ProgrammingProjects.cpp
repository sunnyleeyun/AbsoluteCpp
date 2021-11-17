#include <iostream>
#include <cmath>
#include <string>
#include <set>
#include <fstream>
using namespace std;

// #1
const double KILOBIT_PER_MEGABYTE = 8000;

double fileSizeInMegabyte(double kilobit, double duration);

int q1() {
    double kilobit, duration;
    cout << "Enter the kilobits every second: ";
    cin >> kilobit;
    cout << "Enter the duration in minutes: ";
    cin >> duration;
    double megabyte = fileSizeInMegabyte(kilobit, duration);
    cout << "There are " << megabyte << " megabytes in total.\n";
    return 0;
}

double fileSizeInMegabyte(double kilobit, double duration) {
    return kilobit / KILOBIT_PER_MEGABYTE * duration * 60;
}

// #2
double hikePercentage(double annualCur, double annualPrev);

int q2() {
    double annualCur, annualPrev;
    char ans;
    do {
        cout << "Enter you annaul salary this year: ";
        cin >> annualCur;
        cout << "Enter you annaul salary last year: ";
        cin >> annualPrev;
        double percentage = hikePercentage(annualCur, annualPrev);
        cout << "You salary this year is " << abs(percentage) << " percent "
             << (percentage >= 0 ? "more" : "less") <<  " from last year.\n";
        cout << "Do you want to test on more? (y/n): ";
        cin >> ans;
    } while(ans == 'y' || ans == 'Y');
    return 0;
}


double hikePercentage(double annualCur, double annualPrev) {
    return (annualCur - annualPrev) / annualPrev * 100;
}

// #3
double hikePercentagePlus(double annualCur, double annualPrev);
double estimateSalary(double annualCur, double rate, int years);

int q3() {
    double annualCur, annualPrev;
    int yearsLater;
    char ans;
    do {
        cout << "Enter you annaul salary this year: ";
        cin >> annualCur;
        cout << "Enter you annaul salary last year: ";
        cin >> annualPrev;
        cout << "We could estimate your salary in the future.\n";
        cout << "Enter a number of years: ";
        cin >> yearsLater;
        double percentage = hikePercentagePlus(annualCur, annualPrev);
        double salary = estimateSalary(annualCur, percentage, yearsLater);
        cout << "You salary this year is " << abs(percentage) << " percent "
             << (percentage >= 0 ? "more" : "less") <<  " from last year.\n";
        cout << "Your salary will be " << salary << " in " << yearsLater << " years.\n";
        cout << "Do you want to test on more? (y/n): ";
        cin >> ans;
    } while(ans == 'y' || ans == 'Y');
    return 0;
}


double hikePercentagePlus(double annualCur, double annualPrev) {
    return (annualCur - annualPrev) / annualPrev * 100;
}

double estimateSalary(double annualCur, double rate, int years) {
    double r = rate / 100 + 1;
    for (int i = 0; i < years; i++){
        r *= r;
    }
    return annualCur * r;
}

// #4
const double G = 6.673e-8;

double gravitationalForce(double m1, double m2, double distance);

int q4() {
    double m1, m2, distance;
    char ans;
    do
    {
        cout << "Enter the mass of the two objects: \n";
        cin >> m1 >> m2;
        cout << "Enter the distance between the two objects: ";
        cin >> distance;
        double force = gravitationalForce(m1, m2, distance);
        cout << "The gravitation force between the two objects is " << force << endl;
        cout << "Do you want to test on more? (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    
    return 0;
}

double gravitationalForce(double m1, double m2, double distance) {
    return G * m1 * m2 / pow(distance, 2);
}

// #5
double hatSize(double height, double weight);
double jacketSize(double height, double weight, double age);
double waistSize(double weight, double age);

int q5() {
    double height, weight, age;
    char ans;
    do
    {
        cout << "Enter the height: ";
        cin >> height;
        cout << "Enter the weight: ";
        cin >> weight;
        cout << "Enter the age: ";
        cin >> age;
        double h = hatSize(height, weight);
        double j = jacketSize(height, weight, age);
        double w = waistSize(weight, age);
        cout << "The hat size is " << h << endl;
        cout << "The jacket size is " << j << endl;
        cout << "The waist size is " << w << endl;
        cout << "Do you want to test on more? (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');

    return 0;
}

double hatSize(double height, double weight) {
    const double C = 2.9;
    return weight / height * C;
}

double jacketSize(double height, double weight, double age) {
    const double C1 = 288;
    const double C2 = 1/8;
    double total = height * weight / C1;
    if (age >= 40) {
        for (int i = 30; i < age; i+=10) {
            total += C2;
        }
    }
    return total;
}

double waistSize(double weight, double age) {
    const double C1 = 5.7;
    const double C2 = 1/10;
    double total = weight / C1;
    if (age >= 30) {
        for (int i = 28; i < age; i+=2) {
            total += C2;
        }
    }
    return total;
}

// #6
double averageScore(double s1, double s2, double s3, double s4);
double stdScore(double s1, double s2, double s3, double s4, double avg);

int q6() {
    double s1, s2, s3, s4;
    char ans;
    do
    {
        cout << "Enter the four scores: \n";
        cin >> s1 >> s2 >> s3 >> s4;
        double avg = averageScore(s1, s2, s3, s4);
        double std = stdScore(s1, s2, s3, s4, avg);
        cout << "The average is " << avg << " and the standard deviation is " << std << endl;
        cout << "Do you want to test on more? (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    return 0;
}

double averageScore(double s1, double s2, double s3, double s4) {
    return (s1 + s2 + s3 + s4) / 4;
}

double stdScore(double s1, double s2, double s3, double s4, double avg) {
    return sqrt(pow(s1 - avg, 2) + pow(s2 - avg, 2) + pow(s3 - avg, 2) + pow(s4 - avg, 2));
}

// #7
double distance(double x1, double y1, double x2, double y2);

int q7() {
    double x1, y1, x2, y2;
    char ans;
    do
    {
        cout << "Enter the first coordinate's (x, y) (press enter inbetween input): \n";
        cin >> x1 >> y1;
        cout << "Enter the second coordinate's (x, y) (press enter inbetween input) \n";
        cin >> x2 >> y2;
        double d = distance(x1, y1, x2, y2);
        cout << "The distance between two points is " << d << endl;
        cout << "Do you want to test on more? (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    return 0;
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

// #8
void showSong(int n);
string numberStr(int n);
string bottleStr(int n);

int q8() {
    for (int i = 99; i > 0; i--) {
        showSong(i);
    }
    return 0;
}

void showSong(int n) {
    string bt1 = bottleStr(n);
    string bt2 = bottleStr(n - 1);
    string number1 = numberStr(n);
    string number2 = numberStr(n - 1);
    cout << number1 << bt1 << "of beer on the wall,\n"
         << number1 << bt1 << "of beer.\n"
         << "Take one down, pass it around,\n"
         << number2 << bt2 << "of beer on the wall.\n";
}

string numberStr(int n) {
    string l[100];
    l[0] = "zero";
    l[1] = "one";
    l[2] = "two";
    l[3] = "three";
    l[4] = "four";
    l[5] = "five";
    l[6] = "xix";
    l[7] = "seven";
    l[8] = "eight";
    l[9] = "nine";
    l[10] = "ten";
    l[11] = "eleven";
    l[12] = "twelve";
    l[13] = "thirteen";
    l[14] = "fourteen";
    l[15] = "fifteen";
    l[16] = "sixteen";
    l[17] = "seventeen";
    l[18] = "eighteen";
    l[19] = "ninteen";
    l[20] = "twenty";
    l[30] = "thirty";
    l[40] = "fourty";
    l[50] = "fifty";
    l[70] = "seventy";
    l[80] = "eighty";
    l[90] = "ninety";
    string res = "";
    if (n <= 20) {
        res = l[n];
    } else {
        res = l[n / 10 * 10] + l[n % 10];
    }
    res[0] = toupper(res[0]);
    return res;
}

string bottleStr(int n) {
    return (n == 1 ? " bottle " : " bottles ");
}

// #9
int sumDice(int d1, int d2);
bool playerWon();

int q9() {
    int w = 0;
    for (int i = 0; i < 10000; i++) {
        w += playerWon();
    }
    cout << "The player won " << w << " games" 
         << "and has " << w / 10000.0 * 100 << "% chances of winning.\n";
    return 0;
}

int sumDice(int d1, int d2) {
    return d1 + d2;
}

bool playerWon() {
    // 1st round
    // win 7, 11
    // lose 2, 3, 12
    // else continue, store as 'the point'
    int d1 = rand() % 6;
    int d2 = rand() % 6;
    int s1 = sumDice(d1, d2);
    if (s1 == 7 || s1 == 11) {
        return true;
    } else if (s1 == 2 || s1 == 3 || s1 == 12) {
        return false;
    }

    // 2nd+ round
    // loss 7 ; win 'the point'
    while (true) {
        int dd1 = rand() % 6;
        int dd2 = rand() % 6;
        int s2 = sumDice(dd1, dd2);
        if (s2 == 7) {
            return false;
        } else if (s2 == s1) {
            return true;
        }
    }
}

// #10
int toInches(int feet, int inch);
int estimateHeight(char gender, int motherHeight, int fatherHeight);

int q10() {
    char g;
    int mft, min, fft, fin;
    char ans;
    do
    {
        cout << "Enter the gender of the child (f/m): ";
        cin >> g;
        cout << "Enter the height of the mother with ft and in (press return in between): \n";
        cin >> mft >> min;
        cout << "Enter the height of the father with ft and in (press return in between): \n";
        cin >> fft >> fin;
        int mHeight = toInches(mft, min);
        int fHeight = toInches(fft, fin);
        int h = estimateHeight(g, mHeight, fHeight);
        cout << h << endl;
        cout << "The estimated height for the child is " 
             << h / 12 << " ft " << h % 12 << " in" << endl;
        cout << "Do you want to test on more? (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    return 0;
}

int toInches(int feet, int inch) {
    return 12 * feet + inch;
}

int estimateHeight(char gender, int motherHeight, int fatherHeight) {
    double c = (gender == 'f' ? (12.0 / 13.0) : (13.0 / 12.0));
    return int((motherHeight * c + fatherHeight) / 2);
}

// #11
int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);
int role();

int q11() {
    int humanTotalScore = 0, computerTotalScore = 0;
    while (computerTotalScore < 100) {
        humanTotalScore += humanTurn(humanTotalScore);
        cout << "H: " << humanTotalScore << endl;
        if (humanTotalScore >= 100) {
            cout << "You won!\n";
            break;
        }
        computerTotalScore += computerTurn(computerTotalScore);
        cout << "C: " << computerTotalScore << endl;
    }
    cout << "Computer won!\n";
    return 0;
}

int humanTurn(int humanTotalScore) {
    int res = 0;
    char c;
    do
    {
        int s = role();
        if (s == 1) {
            return 0;
        }
        res += s;
        cout << "Do you want to roll again or hold (r/h): ";
        cin >> c;
    } while (c == 'r');
    return res;
}

int computerTurn(int computerTotalScore) {
    int res = 0;
    do
    {
        int s = role();
        if (s == 1) {
            return 0;
        }
        res += s;
    } while (res < 20);
    return res;
}

int role() {
    return rand( ) % 6;
}

// #12
bool isLeapYear(int year);
int getCenturyValue(int year);
int getYearValue(int year);
int getMonthValue(int month, int year);

int q12() {
    string date;
    int y, m, d;
    cout << "Enter a date.\n";
    cout << "year(ie 2021): ";
    cin >> y;
    cout << "month(1~12): ";
    cin >> m;
    cout << "day(1~31): ";
    cin >> d;
    int t = d + getMonthValue(m, y) + getYearValue(y) + getCenturyValue(y);
    cout << t << endl;
    string l[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << "The day is " << l[t % 7] << endl;
    return 0;
}

bool isLeapYear(int year) {
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int getCenturyValue(int year) {
    int r = year / 100 % 4;
    return (3 - r) * 2;
}

int getYearValue(int year) {
    int t = year % 100;
    int q = t / 4;
    return t + q;
}

int getMonthValue(int month, int year) {
    int l[13];
    l[1] = isLeapYear(year) ? 6 : 0;
    l[2] = isLeapYear(year) ? 2 : 3;
    l[3] = 3;
    l[4] = 6;
    l[5] = 1;
    l[6] = 4;
    l[7] = 6;
    l[8] = 2;
    l[9] = 5;
    l[10] = 0;
    l[11] = 3;
    l[12] = 5;
    return l[month];
}

// #13
int q13() {
    set<int> s;
    do
    {
        s.insert(rand() % 25);
    } while (s.size() < 4);
    
    for (const auto &v : s) {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}

// #14
double babylonian(double n);

int q14() {
    double n;
    char ans;
    do
    {
        cout << "Enter a number: ";
        cin >> n;
        double b = babylonian(n);
        cout << "The square root of " << n << " is " << b << endl;
        cout << "Do you want to test on more? (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    return 0;
}

double babylonian(double n) {
    double guess = n / 2, prevGuess, r;
    do {
        prevGuess = guess;
        r = n / guess;
        guess = (guess + r) / 2;
    } while (abs(guess - prevGuess) > 0.01);
    return r;
}

// #15
int stimulate(int age, char sex);

int q15() {
    int age;
    char sex;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter sex: ";
    cin >> sex;
    int s = stimulate(age, sex);
    cout << "The age is " << s << endl;
    return 0;
}

int stimulate(int age, char sex) {
    int a;
    double m, f;
    fstream inputStream;
    inputStream.open("LifeDeathProbability.txt"); 
    // Remember to cd to the directory the file exist in order for the file to load successfully.
    while (inputStream >> a >> m >> f) {
        if (a < age) {
            continue;
        }
        double r = (RAND_MAX - rand( )) / static_cast<double>(RAND_MAX);
        if (r <= (sex == 'f' ? f : m)) {
            return a;
        } else {
            age++;
        }
    }
    inputStream.close();
    return 120;
}