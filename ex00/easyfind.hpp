#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>

template <typename T>

typename T::iterator easyfind(T &arr, int value) 
{
    typename T::iterator it = std::find(arr.begin(), arr.end(), value);
    if (it == arr.end())
        throw std::runtime_error("Value not found in the container");
    return it;
}

#endif