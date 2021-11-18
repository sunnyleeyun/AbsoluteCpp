#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class BankAccount
{
public:
    BankAccount(double balance, double rate);
    BankAccount(int dollars, int cents, double rate);
    BankAccount(int dollars, double rate);
    BankAccount();

    void update();
    void input();
    void output();
    double getBalance();
    int getDollars();
    int getCents();
    double getRate();

    void setBalance(double balance);
    void setBalance(int dollars, int cents);

    void setRate(double newRate);
private:
    int accountDollars;
    int accountCents;
    double rate;
    int dollarsPart(double amount);
    int centsPart(double amount);
    int round(double number);

    double fraction(double percent);
};

int main()
{
    BankAccount account1(1345.52, 2.3), account2;
    cout << "account 1 initialized as follows:\n";
    account1.output();
    cout << "account 2 initialized as follows:\n";
    account2.output();

    account1 = BankAccount(999, 99, 5.5);
    cout << "account 1 reset to the following:\n";
    account1.output();

    cout << "Enter new data for account 2:\n";
    account2.input();
    cout << "account 2 reset to the following:\n";
    account2.output();
    account2.update();
    cout << "In one year account2 will grow to:\n";
    account2.output();

    return 0;
}

BankAccount::BankAccount(double balance, double rate) : accountDollars(dollarsPart(balance)), accountCents(centsPart(balance))
{
    setRate(rate);
}

BankAccount::BankAccount(int dollars, int cents, double rate)
{
    setBalance(dollars, cents);
    setRate(rate);
}

BankAccount::BankAccount(int dollars, double rate) : accountDollars(dollars), accountCents(0)
{
    setRate(0);
}

BankAccount::BankAccount() : accountDollars(0), accountCents(0), rate(0.0)
{ }

void BankAccount::update() 
{
    double balance = accountDollars + accountCents * 0.01;
    balance = balance + fraction(rate) * balance;
    accountDollars = dollarsPart(balance);
    accountCents = centsPart(balance);
}

void BankAccount::input()
{
    double balanceAsDouble;
    cout << "Enter account balance $";
    cin >> balanceAsDouble;
    accountDollars = dollarsPart(balanceAsDouble);
    accountCents = centsPart(balanceAsDouble);
    cout << "Enter interest rate (NO percent sign): ";
    cin >> rate;
    setRate(rate);
}

void BankAccount::output()
{
    cout << "Account balance: ";
    int absDollars = abs(accountDollars);
    int absCents = abs(accountCents);
    if (accountDollars < 0)
        cout << "-";
    cout << '$' << absDollars;
    if (absCents >= 10)
        cout << "." << absCents << endl;
    else
        cout << "." << '0' << absCents << endl;
    cout << "Rate: " << rate << "%\n";
}

void BankAccount::setBalance(int dollars, int cents)
{
    if ((dollars < 0 && cents > 0) || (dollars > 0 && cents < 0))
    {
        cout << "Inconsistent account data.\n";
        exit(1);
    }
    accountDollars = dollars;
    accountCents = cents;
}

void BankAccount::setRate(double newRate)
{
    if (newRate >= 0.0)
        rate = newRate;
    else
    {
        cout << "Cannot have a negative interest rate.\n";
        exit(1);
    }
}

int BankAccount::dollarsPart(double amount)
{
    return static_cast<int>(amount);
}

int BankAccount::centsPart(double amount)
{
    double doubleCents = amount * 100;
    int intCents = (round(fabs(doubleCents))) % 100;
    if (amount < 0) 
        intCents = -intCents;
    return intCents;
}

int BankAccount::round(double number) 
{
    return static_cast<int>(floor(number + 0.5));
}

double BankAccount::fraction(double percent)
{
    return (percent / 100.0);
}

