#include "Span.hpp"

Span::Span() {
}

Span &Span::operator=(const Span &other)
{
    static_cast<void>(other);
    return *this;
}

Span::Span(const Span &other){
    static_cast<void>(other);
}

Span::Span(unsigned int N) : N(N) {}

Span::~Span() {}

void Span::addNumber(unsigned int N)
{
    if (listnb.size() >= N)
        throw std::runtime_error("listnb is full");
    listnb.push_back(N);
}

int Span::shortestSpan()
{
    if (listnb.size() < 2)
        throw std::runtime_error("no enough number");
 
    std::vector<int> sorted(listnb);
    std::sort(sorted.begin(), sorted.end());
 
    int shortest = INT_MAX;
    for (std::size_t i = 1; i < sorted.size(); ++i)
    {
        int different = sorted[i] - sorted[i - 1];
        if (different < shortest)
            shortest = different;
    }
    return shortest;
}

int Span::longestSpan()
{
    if (listnb.size() < 2)
        throw std::runtime_error("no enought number");
 
    int minVal = *std::min_element(listnb.begin(), listnb.end());
    int maxVal = *std::max_element(listnb.begin(), listnb.end());
 
    return maxVal - minVal;
}
