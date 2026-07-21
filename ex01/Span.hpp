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
    public:
        Span();
        Span &operator=(const Span &other);
        Span(const Span &other);
        ~Span();
        Span(unsigned int N);
        void addNumber(unsigned int N);
        int shortestSpan();
        int longestSpan();  
        std::vector<int> listnb;
};




#endif