#include "Account.h"

Account::Account() {
    accNo = 0;
    name = "";
    balance = 0;
}

Account::Account(int a, string n, double b) {
    accNo = a;
    name = n;
    balance = b;
}

int Account::getAccNo() { return accNo; }
string Account::getName() { return name; }
double Account::getBalance() { return balance; }

void Account::deposit(double amt) {
    balance += amt;
}

bool Account::withdraw(double amt) {
    if (amt > balance) return false;
    balance -= amt;
    return true;
}

void Account::calculateInterest() {
    // base account = no interest
}

string Account::toFile() {
    return to_string(accNo) + "," + name + "," + to_string(balance);
}
