# include "Span.hpp"
# include <iostream>
# include <list>

int main()
{
    Span sp(100000);


    std::list<int> tmp;
    for (size_t i = 0; i < 100000; i++) {
        tmp.push_back(i);
    }
    

    sp.addNumbers(10, 20);
    

    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}