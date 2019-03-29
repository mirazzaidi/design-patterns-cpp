#include "cab-intf.h"
#include "headers/headers.h"

class ICabFactory {
public:
  virtual std::shared_ptr<ICab> getCabOption1() = 0;
  virtual std::shared_ptr<ICab> getCabOption2() = 0;
};
