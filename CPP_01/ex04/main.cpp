#include <string>
#include <iostream>
#include "sed.hpp"

int main(int argc, char *argv[])
{
    Sed sed(argv[2], argv[3]);

    if (argc != 4)
    {
        std::cout << "You entered the wrong amount of arguments." << std::endl;
        return (1);
    }
    if (sed.check_open_file(argv[1]))
        return (1);
    sed.replace();
    sed.output_to_file();
    return (0);
}