#include "headers/premium-cab-factory.h"
#include "headers/cab.h"

std::shared_ptr<ICab> PremiumCabFactory::getCabOption1()
{
    return std::make_shared<XLCab>();
}

std::shared_ptr<ICab> PremiumCabFactory::getCabOption2()
{
    return std::shared_ptr<BlackXLCab>();
}