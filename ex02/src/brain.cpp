#include "../inc/brain.hpp"

Brain::Brain()
{
    std::cout << "A soul is born." << std::endl;
}

Brain::~Brain()
{
    std::cout << "A soul just left us." << std::endl;
}

Brain&   Brain::operator=(const Brain& copy) 
{
    std::cout << "[ Brain ] has been copied with copy assignment operator." << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = copy.ideas[i];
    }
    return (*this);
}

Brain::Brain( const Brain& copy ) 
{
    *this = copy;
    std::cout << "[ Brain ] has been copied with copy constuctor." << std::endl;
}