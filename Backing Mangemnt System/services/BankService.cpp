#include "BankService.h"
#include "../utils/FileHandler.h"
#include "../Model/savingsAccount.h"
#include "../Model/Account.h"

#include<iostream>
using namespace std;

BankService::BankService()
{
    Accounts=FileHandler::load();
    
}
void BankService()
{
    int a;
    string n;
    double b;

    cout<<"Acc No: "; cin>>a;
    cout<<"Name :"; cin>>n;
    cout<<"Balance :"; cin>>b;

    Accounts.push_back(newSavingAccount(a,n,b));
    FileHandler::save(Accounts);

}
void BankService::deposit(){
    int a;
    double amt;
    cout<<"Acc no: "; cin>>a;
    cout<<"Ammount: "; cin>>amt;

    for(auto acc : Accounts){
        if(acc->getAccNo() == a){
            acc->deposit(amt);
            FileHandler::save(Accounts);
            return;
        }
    }
}
void BankService::withdraw(){
    int a;
    double amt;
    cout<<"Acc No: "; cin>>a;
    cout<<"Ammount: "; cin>>amt;

    for(auto acc: Accounts){
        if (acc->getAccNo()==a)
        {
            acc->withdraw(amt);
            FileHandler::save(Accounts);
            FileHandler::save(Accounts);
            return;
        }
    }
}
void BankService::showAll()
{
    for (auto acc: Accounts)
    {
        cout<<acc->getAccNo()<<" "
        <<acc->getName()<< " "
        <<acc->getBalance()<<endl;
    }
    
}
void BankService:: addinterest()
{
    for(auto acc: Accounts)
    {
       acc->calculateInterest()
    }
    FileHandler::save(Accounts);
}
