#include "../inc/animal.hpp"

Animal::Animal()
{
    std::cout << "[ Animal ] is born!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "[ Animal ] - " << this->type << " went on with its life." 
        << std::endl;
}

Animal&   Animal::operator=(const Animal& copy) 
{
    std::cout << "[ Animal ]" << this->type << " has been copied with copy assignment operator." << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

Animal::Animal( const Animal& copy ) 
{
    *this = copy;
    std::cout << "[ Animal ]" << this->type << " has been copied with copy constuctor." << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "[ Animal ] undefined sounds!" << std::endl;
}

std::string Animal::getType() const
{
   return (this->type); 
}