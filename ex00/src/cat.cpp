#include "../inc/cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "[ " << this->type << " ] dutti's over." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "[ Cat ] meows!" << std::endl;
}