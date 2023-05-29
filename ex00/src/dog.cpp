#include "../inc/dog.hpp"

Dog::Dog(): Animal()
{
    this->type = "Dog";
}

Dog::~Dog(void)
{
    std::cout << "[ " << this->type << " ] dutti's over." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "[ Dog ] barks!" << std::endl;
}