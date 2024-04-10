#ifndef SNAPSHOT_H
#define SNAPSHOT_H
#include <string>

#include "AuditableSnapshot.h"
#include "User.h"
#include "Snapshot.h"

using namespace std;

class Snapshot{
    public:
        virtual string GetUsername() const = 0;
        virtual string date() const = 0;
        virtual string state() const = 0;
    private:
        bool passwordchanged;
        bool usernamechanged;
        bool generatedstring;

};
#endif