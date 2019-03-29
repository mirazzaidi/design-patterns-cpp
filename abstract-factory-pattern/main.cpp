#include "cab-factory-intf.h"
#include "eco-cab-factory.h"
#include "premium-cab-factory.h"

int main()
{
    auto factory1 = std::make_shared<EcoCabFactory>();
    auto factory2 = std::make_shared<PremiumCabFactory>();

    auto factory(factory1);

    auto cab1 = factory->getCabOption1();
    auto cab2 = factory->getCabOption2();

    std::cout << "\nCab Options for you:-\n";

    std::cout << "\nCab Type: " << cab1->getType();
    std::cout << "\nPrice: " << cab1->getPrice();
    std::cout << "\nMax Seats: " << cab1->getSeats();

    std::cout << "\n\nCab Type: " << cab2->getType();
    std::cout << "\nPrice: " << cab2->getPrice();
    std::cout << "\nMax Seats: " << cab2->getSeats();
}