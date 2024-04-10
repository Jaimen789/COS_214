#ifndef USER_h
#define USER_h

#include "AuditableSnapshot.h"
#include "Snapshot.h"
#include "User.h"

#include<string>

using namespace std;
class User
{
    public:
        User (string username, string password);
        void SetPassword();
        void Restore(AuditableSnapshot *memento);

        void Restore(Snapshot *memento);
    
    private:
        string _username;
        string _password;
        string GenerateRandomString(int length = 10);

};
#endif