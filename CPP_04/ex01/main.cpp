#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

int main(void)
{
    Animal  *animals[10];
    Brain   *brain = NULL;

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "---------------------" << std::endl;

    brain = animals[0]->getBrain();
    brain->ideas[0] = "Checkkooo";
    brain->ideas[1] = "Dikke lul 3 bier";
    std::cout << animals[0]->getBrain()->ideas[0] << std::endl;
    std::cout << animals[0]->getBrain()->ideas[1] << std::endl;

    *(animals[4]) = *(animals[0]);
    std::cout << animals[4]->getBrain()->ideas[0] << std::endl;

    std::cout << "---------------------" << std::endl;

    for (int i = 0; i < 10; i++)
        delete animals[i];
    return (0);
}
