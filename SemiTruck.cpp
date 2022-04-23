#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string &n) : Vehicle(n)
{
}

void SemiTruck::blowHorn()
{
    setSpeed(60);
    std::cout << name << ": blows his their horn. HONK HONK!!" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": is pulling over." << std::endl;
}

void SemiTruck::tryToEvade()
{
    std::cout << name << ": won't try to evade." << std::endl;
    pullOver();
}
