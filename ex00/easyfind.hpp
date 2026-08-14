#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>

template <typename T>

void easyfind(T &arr, int value) 
{
    typename T::const_iterator it = std::find(arr.begin(), arr.end(), value);
    if (it == arr.end())
        throw std::runtime_error("Value not found in the container");
    std::cout << *it << std::endl;
}

#endif
