#include "structure.hpp"
#include <stdint.h>
#include <iostream>

uintptr_t   serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*   deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
    Data        *ptr = new Data;
    uintptr_t   raw;
    Data        *result;

    ptr->data = "Hallooooo";
    raw = serialize(ptr);
    result = deserialize(raw);
    std::cout << ptr << std::endl;
    std::cout << &raw << std::endl;
    std::cout << result << std::endl;
    std::cout << result->data << std::endl;
    delete ptr;
}