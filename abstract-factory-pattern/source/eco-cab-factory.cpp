#include "headers/eco-cab-factory.h"
#include "headers/cab.h"

std::shared_ptr<ICab> EcoCabFactory::getCabOption1()
{
    return std::make_shared<XLCab>();
}

std::shared_ptr<ICab> EcoCabFactory::getCabOption2()
{
    return std::shared_ptr<BlackXLCab>();
}