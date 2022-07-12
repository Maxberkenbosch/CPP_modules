#include "Span.hpp"

int main(void)
{
    Span span = Span(3);

    span.addNumber(6);
    span.addNumber(3);
    span.addNumber(17);
    span.addNumber(9);

    std::cout << span.shortestSpan() << std::endl;
    std::cout << span.longestSpan() << std::endl;

    std::cout << std::endl << "-----------------" << std::endl << std::endl;

    Span sp = Span(15000);

    for (int i = 0; i < 15000; i++)
    {
        sp.addNumber(rand());
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << std::endl << "-----------------" << std::endl << std::endl;

    Span test = Span(500);

    test.rangeOfIterators(500);
    std::cout << test.shortestSpan() << std::endl;
    std::cout << test.longestSpan() << std::endl;
    return 0;
}