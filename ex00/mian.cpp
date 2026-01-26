#include <iostream>
#include <vector>


int main()
{
    int a = 1;
    std::vector<int> A;
    // A.resize(10);
    for (size_t i = 0; i < 10000000000; i++)
    {
        A.push_back(i);
        std::cout << A[i] << std::endl;
    }
    std::cout <<"lol " <<  A.size() << std::endl;
    A.
}