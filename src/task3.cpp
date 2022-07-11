#include "task3.h"
#include <iostream>
#include <filesystem>
#include <vector>

void task3()
{
    auto recursiveGetFileNamesByExtension = [](std::filesystem::path path, const std::string extension)
    {
        std::vector<std::string> output;
        for(auto& p: std::filesystem::recursive_directory_iterator(path))
        {
            if (std::filesystem::is_regular_file(p.path()))
                if (p.path().extension().string()==extension)
                    output.push_back(p.path().filename().string());
        }
        return output;
    };
    auto j = recursiveGetFileNamesByExtension("G:\\work\\Prog\\progs\\DZ33", ".exe");
    for (auto i : j)
    {
        std::cout << i <<std::endl;
    }
}