#include "iter.hpp"
#include <iostream>

template <typename T>
void    printValue( const T &anyType)
{
    std::cout << anyType << std::endl;
}

int main(void)
{
    std::string stringArray[4] = {"first", "second", "third", "fourth" };
    int         intArray[4] = { 1, 2, 3, 4};
    
    iter(stringArray, 4, &printValue<std::string>);
    iter(intArray, 4, &printValue<int>);
}