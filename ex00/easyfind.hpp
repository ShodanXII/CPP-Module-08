#pragma once 

#include <exception>
#include <iostream>
#include <vector>


class e : std::exception
{
    public:
    virtual const char *what() const throw()
    {
        return "Cant find the value passed";
    }
    
};


template <typename T>
typename ::eterator::easyfind(T* a, int &b)
{
    std::cout << "esyfind smethod been called" <<std::endl;

}