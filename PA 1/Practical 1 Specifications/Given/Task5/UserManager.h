#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "AuditableSnapshot.h"
#include "UserManager.h"
#include "User.h"


class UserMnager{
    public:
        UserManager(AuditableSnapshot * memento);
        void Backup();
        void Undo();
        void ShowHistory() const;

    private:
        AuditableSnapshot *memento;
};
#endif