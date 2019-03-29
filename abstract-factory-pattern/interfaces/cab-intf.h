#include "headers.h"

class ICab
{
    string cabType;

  public:
    virtual int getPrice() = 0;
    virtual int getSeats() = 0;
    virtual std::string getType() = 0;
};
