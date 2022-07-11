#include "task2.h"
#include <iostream>
#include <unordered_set>
#include <vector>
#include <memory>

void task2()
{
    auto unique_vector = [](std::vector<int> input)
    {
        std::unordered_set<int> check;
        auto output = std::make_unique<std::vector<int>>();
        for (auto i : input)
        {
            if (!check.contains(i))
            {
                output->push_back(i);
                check.insert(i);
            }
        }
        return output;
    };
    std::vector<int> a {1, 2, 3, 3, 4, 5, 3, 1, 2 ,6 ,4, 3, 2};
    auto out = unique_vector(a);
    for (auto i : *out)
    {
        std::cout << i << std::endl;
    }
}