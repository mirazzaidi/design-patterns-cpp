#include "interfaces/cab-intf.h"

class MiniCab : public ICab
{

  public:
    MiniCab() { std::cout << "\nMini Cab created"; }
    ~MiniCab() { std::cout << "\nMini Cab deleted"; }

    int getPrice() { return 75; }
    int getSeats() { return 3; }
    std::string getType() { return "Mini"; }
};

class MicroCab : public ICab
{
  public:
    MicroCab() { std::cout << "\nMicroCab Cab created"; }
    ~MicroCab() { std::cout << "\nMicroCab Cab deleted"; }

    int getPrice() { return 50; }
    int getSeats() { return 4; }
    std::string getType() { return "MicroCab"; }
};

class XLCab : public ICab
{

  public:
    XLCab() { std::cout << "\nXL Cab created"; }
    ~XLCab() { std::cout << "\nXL Cab deleted"; }
    int getPrice() { return 100; }
    int getSeats() { return 6; }
    std::string getType() { return "XLCab"; }
};

class BlackXLCab : public ICab
{
  public:
    BlackXLCab() { std::cout << "\nBlack XL Cab created"; }
    ~BlackXLCab() { std::cout << "\nBlack XL Cab deleted"; }
    int getPrice() { return 150; }
    int getSeats() { return 7; }
    std::string getType() { return "BlackXLCab"; }
};
