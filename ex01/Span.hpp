# ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <stdexcept>

class Span {
    private:
        unsigned int Max_n;
        std::vector<long long> buf;
    public:
        Span(unsigned int N);
        Span(const Span &other); 
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(long long num);
        long long shortestSpan();
        long long longestSpan();
};

# endif