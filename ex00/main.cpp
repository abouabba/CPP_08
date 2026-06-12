#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    // const std::vector<int> tmp(v);

    try
    {
        std::vector<int>::iterator it = easyfind(v, 10);
        std::cout << "Found: " << *it << std::endl;
        *it++;
        std::cout << "Found: " << *it << std::endl;
        *it++;
        std::cout << "Found: " << *it << std::endl;
        *it = 100;
        std::cout << "Found: " << *it << std::endl;

    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}
