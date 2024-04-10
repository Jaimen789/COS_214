#ifndef AUDITABLESNAPSHOT_H
#define AUDITABLESNAPSHOT_H
#include "AuditableSnapshot.h"
#include "User.h"
#include "UserManager.h"
#include "Snapshot.h"

#include <iostream>
using namespace std;

class AuditableSnapshot{
    public:
        virtual string GetUsername() const = 0;
        virtual string GetDate() const = 0;
        virtual string GetState() const = 0;
    private:
        string _username;
        string _password;
        string GenerateRandomString(int length = 10);
};


#endif