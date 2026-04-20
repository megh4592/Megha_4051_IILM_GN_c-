#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <vector>
#include "../Model/Account.h"

class FileHandler{
    public:
    static void save(vector<Account*>&);
    static vector<Account*> load();
};
#endif