#pragma once

#include <iostream>
#include <limits>
#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& n);

    ~SemiTruck() override;

    SemiTruck(const SemiTruck&);

    SemiTruck& operator=(const SemiTruck&);

    void blowHorn();

    void pullOver();

    void tryToEvade() override;
};
