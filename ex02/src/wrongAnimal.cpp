#include "../inc/wrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "[ WrongAnimal ] is born!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[ WrongAnimal ] - " << this->type << " went on with its life." 
        << std::endl;
}

WrongAnimal&   WrongAnimal::operator=(const WrongAnimal& copy) 
{
    std::cout << "[ WrongAnimal ]" << this->type << " has been copied with copy assignment operator." << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy ) 
{
    *this = copy;
    std::cout << "[ WrongAnimal ]" << this->type << " has been copied with copy constuctor." << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "[ WrongAnimal ] wrong undefined sounds!" << std::endl;
}

std::string WrongAnimal::getType() const
{
   return (this->type); 
}