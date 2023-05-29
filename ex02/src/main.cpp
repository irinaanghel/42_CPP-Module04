#include "../inc/dog.hpp"
#include "../inc/cat.hpp"
#include "../inc/wrongCat.hpp"
#include "../inc/brain.hpp"

int main( void )
{
    std::cout << "--------------- AAnimal ---------------" << std::endl;

    //Animal test;
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    
    Dog basic;
    {
        Dog tmp = basic;
    }

    const AAnimal* AAnimals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) 
    {
        delete AAnimals[i];
    }
    
    return 0;
}