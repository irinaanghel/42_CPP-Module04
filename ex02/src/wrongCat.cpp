#include "../inc/wrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "[ " << this->type << " ] dutti's over." << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "[ WrongCat ] wrong meows!" << std::endl;
}