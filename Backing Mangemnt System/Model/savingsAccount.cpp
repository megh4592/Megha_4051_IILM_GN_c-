#include "savingsAccount.h"

SavingsAccount::SavingsAccount(int a, string n, double b):
Account(a,n,b){}

void SavingsAccount::calculateInterest(){
    balance += balance * 0.05;
}