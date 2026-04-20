#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account {
protected:
    int accNo;
    string name;
    double balance;

public:
    Account();
    Account(int, string, double);

    int getAccNo();
    string getName();
    double getBalance();

    void deposit(double);
    bool withdraw(double);

    virtual void calculateInterest(); // Polymorphism

    string toFile();
};

#endif
