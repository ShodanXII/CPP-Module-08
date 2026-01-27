#pragma once 

#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>


class e : public std::exception
{
    public:
    virtual const char *what() const throw()
    {
        return "Cant find the value passed";
    }
    
};


template <typename T>
typename T::iterator easyfind(T& a, int n)
{
    std::cout << "easyfind non const been caled" << std::endl;
    typename T::iterator i = std::find(a.begin(), a.end(), n);
    if(i == a.end())
        throw e();
    return i;
}

template <typename T>
typename T::const_iterator easyfind(const T& a, int n)
{
    std::cout << "easyfind for const been caled" << std::endl;
    typename T::const_iterator it = std::find(a.begin(), a.end(), n);
    if (it == a.end())
        throw e();
    return it;
}
