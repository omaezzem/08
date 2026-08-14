#include "Span.hpp"

template <typename T>
void add_range_of_numbers(Span &sp, T begin, T end)
{
    for (T it = begin; it != end; ++it)
    {
        sp.addNumber(*it);
    }
}
int main()
{
    Span sp = Span(5);
    std::vector<int> numbers;
    numbers.push_back(6);
    numbers.push_back(3);
    numbers.push_back(9);
    numbers.push_back(17);
    numbers.push_back(11);
    add_range_of_numbers(sp, numbers.begin(), numbers.end());
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(9);
    // sp.addNumber(17);
    // sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
