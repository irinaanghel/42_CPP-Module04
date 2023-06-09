#include "../inc/aanimal.hpp"

AAnimal::AAnimal()
{
}

AAnimal::AAnimal(std::string str)
{
    this->type = str;
    std::cout << "[ AAnimal ] " << this->type << " constructor called!" 
        << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "[ AAnimal ] - " << this->type << " deconstructor called!" 
        << std::endl;
}

AAnimal&   AAnimal::operator=(const AAnimal& copy) 
{
    std::cout << "[ AAnimal ]" << this->type << " has been copied with copy assignment operator."
        << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

AAnimal::AAnimal( const AAnimal& copy ) 
{
    *this = copy;
    std::cout << "[ AAnimal ]" << this->type << " has been copied with copy constuctor."
        << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << "[ AAnimal ] undefined sounds!" << std::endl;
}

std::string AAnimal::getType() const
{
   return (this->type); 
}