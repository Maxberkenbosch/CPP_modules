#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "struct.hpp"
#include <stdlib.h>
#include <iostream>

Base * generate(void)
{
    int     random;
    Base    *ptr = NULL;
    t_typeList types[] = 
    {
        { 1, new A() },
		{ 2, new B() },
		{ 3, new C() }
    };

    random = rand() % 3 + 1;
    for (int i = 0; i < 3; i++)
    {
        if (types[i].typeNumber == random)
            ptr = (types[i].type);
        else
            delete types[i].type;
    }
    return (ptr);
}

void identify(Base* p)
{
    A *a;
	if ((a = dynamic_cast<A *>(p)))
		std::cout << "A" << std::endl;
	B *b;
	if ((b = dynamic_cast<B *>(p)))
		std::cout << "B" << std::endl;
	C *c;
	if ((c = dynamic_cast<C *>(p)))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A   &a = dynamic_cast< A& >(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
    
    try
    {
        B   &b = dynamic_cast< B& >(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }

    try
    {
        C   &c = dynamic_cast< C& >(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
}

int main(void)
{
    Base    *p;

    std::cout << std::endl << "------------------" << std::endl << std::endl;;

    p = generate();
    std::cout << "Identified with a pointer: --> ";
    identify(p);
    delete p;

    std::cout << std::endl << "------------------" << std::endl << std::endl;;

    p = generate();
    std::cout << "Identified with a reference: --> ";
    identify(*p);
    delete p;

    std::cout << std::endl << "------------------" << std::endl << std::endl;;

    p = generate();
    std::cout << "Identified with a pointer: --> ";
    identify(p);
    delete p;

    std::cout << std::endl << "------------------" << std::endl << std::endl;;

    p = generate();
    std::cout << "Identified with a reference: --> ";
    identify(*p);
    delete p;

    std::cout << std::endl << "------------------" << std::endl << std::endl;;

    p = generate();
    std::cout << "Identified with a pointer: --> ";
    identify(p);
    delete p;

    std::cout << std::endl << "------------------" << std::endl << std::endl;;

    p = generate();
    std::cout << "Identified with a reference: --> ";
    identify(*p);
    delete p;

    std::cout << std::endl << "------------------" << std::endl << std::endl;;
    p = generate();
    std::cout << "Identified with a pointer: --> ";
    identify(p);
    delete p;

    std::cout << std::endl << "------------------" << std::endl << std::endl;;

    p = generate();
    std::cout << "Identified with a reference: --> ";
    identify(*p);
    delete p;

    std::cout << std::endl << "------------------" << std::endl << std::endl;;
}