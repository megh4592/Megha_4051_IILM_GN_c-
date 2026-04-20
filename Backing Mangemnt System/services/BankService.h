#ifndef BANKSERVICE_H
#define BANKSERVICE_H
#include "../Model/Account.h"
#include "../utils/FileHandler.h"
#include <vector>

class BankService
{
    private:
    vector<Account*>Accounts;

public:

BankService();
void createAccount();
void withdraw();
void deposit();
void addinterest();
void showAll();

};

#endif