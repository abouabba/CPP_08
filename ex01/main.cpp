# include "Span.hpp"
# include <iostream>
# include <list>

int main()
{
    Span sp(100000);

    std::list<int> tmp;
    for (size_t i = 0; i < 99999; i++) {
        tmp.push_back(i);
    }
    try {
        std::cout << "add one number:" << std::endl;
        sp.addNumber(9);
        std::cout << "add more numbers :" << std::endl;
        sp.addNumbers(tmp.begin(), tmp.end());
        std::cout << "shortsetSpan :"<< sp.shortestSpan() << std::endl;
        std::cout << "longestSpan :"<< sp.longestSpan() << std::endl;
    } catch(const std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}