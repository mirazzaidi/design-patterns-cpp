#include "interfaces/cab-factory-intf.h"
#include "interfaces/cab-intf.h"

class PremiumCabFactory : public ICabFactory
{
public:
  PremiumCabFactory() { std::cout << "\n PremiumCabFactory created"; }

  ~PremiumCabFactory() { std::cout << "\n PremiumCabFactory deleted"; }

  std::shared_ptr<ICab> PremiumCabFactory::getCabOption1();

  std::shared_ptr<ICab> PremiumCabFactory::getCabOption2();
};
