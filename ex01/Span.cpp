# include "Span.hpp"

Span::Span(unsigned int N) : Max_n(N) {}

Span::Span(const Span &other) {*this = other;}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        Max_n = other.Max_n;
        buf = other.buf;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(long long num) {
    if (buf.size() >= Max_n)
        throw std::runtime_error("we cannot add more numbers");
    buf.push_back(num);
}

long long Span::shortestSpan()
{
    if (buf.size() < 2)
        throw std::runtime_error("Not enough numbers");

    std::vector<long long> tmp(buf);
    std::sort(tmp.begin(), tmp.end());
    long long shortest = tmp[1] - tmp[0];
    for (size_t i = 1; i < tmp.size() - 1; i++) {
        long long diff = tmp[i + 1] - tmp[i];

        if (diff < shortest)
            shortest = diff;
    }

    return (shortest);
}

long long Span::longestSpan() {
    if (buf.size() < 2)
        throw std::runtime_error("Not enough numbers");

    long long max = *std::max_element(buf.begin(), buf.end());
    long long min = *std::min_element(buf.begin(), buf.end());
    return max - min;
}