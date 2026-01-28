#include "Span.hpp"
#include <iostream>
#include <vector>

int main()
{
    try
    {
        // Test basic functionality
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        
        // Test with range
        Span sp2 = Span(10000);
        std::vector<int> v;
        for (int i = 0; i < 10000; i++)
            v.push_back(i);
        sp2.addNumber(v.begin(), v.end());
        
        std::cout << "Large span shortest: " << sp2.shortestSpan() << std::endl;
        std::cout << "Large span longest: " << sp2.longestSpan() << std::endl;
        
        // Test exception
        sp.addNumber(42); // Should throw
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    return 0;
}


// **Expected output:**

// Shortest span: 2
// Longest span: 14
// Large span shortest: 1
// Large span longest: 9999
// Exception: Span is full.