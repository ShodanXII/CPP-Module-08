#include "Span.hpp"
#include <algorithm>
#include <stdexcept>
#include <climits>

Span::Span(void)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(const Span& copy) : _N(copy._N), _numbers(copy._numbers)
{
}

Span& Span::operator=(const Span& copy)
{
    if (this != &copy)
    {
        this->_N = copy._N;
        this->_numbers = copy._numbers;
    }
    return *this;
}

Span::~Span(void)
{
}

void Span::addNumber(const int &member)
{
    if (_numbers.size() >= _N)
        throw std::length_error("Span is full.");
    _numbers.push_back(member);
}

int Span::shortestSpan(void)
{
    if (_numbers.size() < 2)
        throw std::length_error("Span must contain at least two numbers.");
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    unsigned int shortest = UINT_MAX;
    for (size_t i = 0; i < sorted.size() - 1; i++)
    {
        unsigned int cur = sorted[i + 1] - sorted[i];
        shortest = std::min(shortest, cur);
    }
    return shortest;
}

int Span::longestSpan(void)
{
    if (_numbers.size() < 2)
        throw std::length_error("Span must contain at least two numbers.");
    std::vector<int>::iterator minIt = std::min_element(_numbers.begin(), _numbers.end());
    std::vector<int>::iterator maxIt = std::max_element(_numbers.begin(), _numbers.end());
    return *maxIt - *minIt;
}
