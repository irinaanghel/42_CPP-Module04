#include "../inc/dog.hpp"

Dog::Dog(): Animal()
{
    this->type = "Dog";
    this->brain = new Brain;
}

Dog::~Dog(void)
{
    delete this->brain;
    std::cout << "[ " << this->type << " ] dutti's over." << std::endl;
}

Dog::Dog(const Dog& copy)
{
    *this = copy;
    std::cout << "[ Dog ] has been copied with copy costructor. " << std::endl;
}

Dog&   Dog::operator=(const Dog& copy) 
{
    std::cout << "[ Dog ] has been copied with copy assignment operator." << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        this->brain = new Brain(*copy.brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "[ Dog ] barks!" << std::endl;
}