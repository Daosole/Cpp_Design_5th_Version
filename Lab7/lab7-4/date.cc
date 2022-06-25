#include "date.h"
#include <iostream>

Date::~Date()
{
    std::cout << "Date class Destructors work!" << std::endl;
}

void Date::setBrith()
{
    int yy, mm, dd;
    std::cout << "Enter the birthday(yyyy mm dd):" << std::endl;
    std::cin >> yy >> mm >> dd;
    year = yy;
    month = mm;
    day = dd;
}