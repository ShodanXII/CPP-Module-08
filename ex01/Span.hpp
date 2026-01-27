#pragma once


class Span
{
private:
    unsigned int _N;
    Span( void );
public:
    Span( unsigned int N );
    Span( const Span& copy );
    Span& operator=(const Span& copy );
    ~Span( void );
	int shortestSpan( void );
    void addNumber(const int &member);
	int longestSpan( void );

    template <typename It>
    void addNumber(It begin, It end);    
};