#include "Span.hpp"

Span::Span() {
    N = 0;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        N = other.N;
        listnb = other.listnb;
    }
    return *this;
}

Span::Span(const Span &other){
    N = other.N;
    listnb = other.listnb;
}

Span::Span(unsigned int n) : N(n) {}

Span::~Span() {}

void Span::addNumber(unsigned int number)
{
    if (listnb.size() + 1 > N)
        throw std::runtime_error("listnb is full");
    listnb.push_back(number);
}

long long Span::shortestSpan()
{
    if (listnb.size() < 2)
        throw std::runtime_error("no enough number");
 
    std::vector<int> sorted(listnb);
    std::sort(sorted.begin(), sorted.end());
 
    long long shortest = 9223372036854775807;
    for (std::size_t i = 1; i < sorted.size(); ++i)
    {
        long long different = sorted[i] - sorted[i - 1];
        if (different < shortest)
            shortest = different;
    }
    return shortest;
}

long long Span::longestSpan()
{
    if (listnb.size() < 2)
        throw std::runtime_error("no enought number");

    long long minVal = *std::min_element(listnb.begin(), listnb.end());
    long long maxVal = *std::max_element(listnb.begin(), listnb.end());

    return maxVal - minVal;
}
