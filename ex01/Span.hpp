#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <climits>
#include <iterator>


class Span{
    private:
        unsigned int N;
        std::vector<int> listnb;
    public:
        Span();
        Span &operator=(const Span &other);
        Span(const Span &other);
        ~Span();
        Span(unsigned int N);
        void addNumber(unsigned int N);
        int shortestSpan();
        int longestSpan();  
};




#endif