#include "easyfind.hpp"

int main()
{
    int arrr[] = {2, 3, 4};
    std::vector<int> numbers(arrr, arrr + 3);

    try
    {
        easyfind(numbers, 4);
        easyfind(numbers, 2);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
