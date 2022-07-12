#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{

    Cat cat;

    cat.makeSound();

    Dog dog;

    dog.makeSound();

    const Animal        *i = new Animal();
    const Animal        *j = new Cat();
    const Animal        *k = new Dog();
    const WrongAnimal   *l = new WrongCat();

    std::cout << "An " << i->getType() << " makes the following sound : ";
    i->makeSound();
    std::cout << "A " << j->getType() << " makes the following sound : ";
    j->makeSound();
    std::cout << "A " << k->getType() << " makes the following sound : ";
    k->makeSound();
    std::cout << "A " << l->getType() << " makes the following sound : ";
    l->makeSound();
    delete i;
    delete j;
    delete k;
    delete l;

    const WrongAnimal* animalWrong = new WrongAnimal();
	const WrongAnimal* catWrong = new WrongCat();
	std::cout << catWrong->getType() << std::endl;
	animalWrong->makeSound();
	catWrong->makeSound();
	delete animalWrong;
	delete catWrong;
    return (0);
}
   