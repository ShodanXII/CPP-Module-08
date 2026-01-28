#pragma once

#include <vector>

class Span
{
private:
    Span(void);
    unsigned int _N;
    std::vector<int> _numbers;
    
public:
    Span(unsigned int N);
    Span(const Span& copy);
    Span& operator=(const Span& copy);
    ~Span(void);
    void addNumber(const int &member);
    int shortestSpan(void);
    int longestSpan(void);
    template <typename It>
    void addNumber(It begin, It end);
};

#include "Span.tpp"