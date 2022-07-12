#include <iostream>
#include "Convert.hpp"

int main(int argc, char *argv[])
{
    try
    {
        if (argc != 2)
            throw (Convert::ArgcException());
        Convert convert(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}