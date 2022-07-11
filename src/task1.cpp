#include "task1.h"
#include <iostream>
#include <array>

void task1()
{
    std::array<int,5> array = {1,2,3,4,5};
    for ( auto i: array)
    {
        std::cout << i <<std::endl;
    }
}