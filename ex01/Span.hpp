#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span{
    private:
        unsigned int N;
        std::vector<int> listnb;
    public:
        Span();
        Span &operator=(const Span &other);
        Span(const Span &other);
        ~Span();
        Span(unsigned int n);
        void addNumber(unsigned int number);
        template <typename T>
        void add_range_of_numbers(T begin, T end)
        {
            for (T it = begin; it != end; ++it)
            {
                addNumber(*it);
            }
        }
        long long shortestSpan();
        long long longestSpan();
};

#endif