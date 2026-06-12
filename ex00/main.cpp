#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> tmp;

    tmp.push_back(10);
    tmp.push_back(20);
    tmp.push_back(30);
    tmp.push_back(40);

    const std::vector<int> v(tmp);

    try
    {
        std::vector<int>::const_iterator it = easyfind(v, 30);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}
