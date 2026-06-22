# ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <stdexcept>

class Span {
    private:
        unsigned int Max_n;
        std::vector<int> buf;
    public:
        Span(unsigned int N);
        Span(const Span &other); 
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
        template <typename iterator>
        void addNumbers(iterator first, iterator last) {
            while(first != last) {
                if (buf.size() >= Max_n)
                    throw std::runtime_error("span is full");
                addNumber(*first);
                first++;
            }
        }
};

# endif