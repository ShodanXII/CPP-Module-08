#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);

        // std::vector<int>::iterator i = easyfind(v, 10);
        std::vector<int>::iterator it = easyfind(v, 20);
        std::cout << "Found in vector: " << *it << std::endl;

        std::list<int> l;
        l.push_back(1);
        l.push_back(2);
        l.push_back(3);

        std::list<int>::iterator it2 = easyfind(l, 3);
        std::cout << "Found in list: " << *it2 << std::endl;

        easyfind(v, 99); // should throw
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
