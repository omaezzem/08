#include "Span.hpp"

int main()
{
    try
    {    Span sp = Span(5);

        sp.addNumber(9);

        int arrr[] = {2, 4, 100, 98};
        std::vector<int> numbers(arrr, arrr + 4);
        sp.add_range_of_numbers(numbers.begin(), numbers.end());

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
