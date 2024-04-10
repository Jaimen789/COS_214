#include "AuditableSnapshot.h"
#include "User.h"
class AuditableSnapshot {
  public:
    virtual std::string GetUsername() const = 0;
    virtual std::string date() const = 0;
    virtual std::string state() const = 0;

  private:
    string _username;
    string _password;
    string GenerateRandomString(int length = 10);
};