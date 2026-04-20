#include "FileHandler.h"
#include <fstream>//read and write file
#include <sstream>
void FileHandler::save(vector<Account*>accounts)
{
 ofstream("data/accounts.txt");
 for(auto acc: accounts){
    file<<acc->toFile()<<endl;
    file.close();

 }
 vector<Account*>FileHandler::load(){
    vector<Account*>Account;
    ifstream file("data/accounts.txt");
    string line;
    while(getline(file,line))
    {
        stringstream ss(line);
        string a,n,b;
        getline(ss,a,',');
        getline(ss,n,',');
        getline(ss,b,',');

        accounts.push_back(newAccount(stoi(a),n,stod(b)));
    }
    file.close();
    return accounts;

 }
}
