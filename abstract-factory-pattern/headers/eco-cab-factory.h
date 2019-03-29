#include "cab-factory-intf.h"

class EcoCabFactory : public ICabFactory
{
public:
  EcoCabFactory() { std::cout << "\n EcoCabFactory created"; }

  ~EcoCabFactory() { std::cout << "\nEcoCabFactory deleted"; }

  std::shared_ptr<ICab> getCabOption1();

  std::shared_ptr<ICab> getCabOption2();
};
