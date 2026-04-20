
#include <iostream>
#include "services/BankService.h"

using namespace std;

int main() {
    BankService bank;
    int ch;

    do {
        cout << "\n1.Create 2.Deposit 3.Withdraw 4.Interest 5.Show 0.Exit\n";
        cin >> ch;

        switch (ch) {
        case 1: bank.createAccount(); break;
        case 2: bank.deposit(); break;
        case 3: bank.withdraw(); break;
        case 4: bank.addInterest(); break;
        case 5: bank.showAll(); break;
        }

    } while (ch != 0);

    return 0;
}
