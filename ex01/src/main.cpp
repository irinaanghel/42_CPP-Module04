#include "../inc/dog.hpp"
#include "../inc/cat.hpp"
#include "../inc/wrongCat.hpp"
#include "../inc/brain.hpp"

int main( void )
{
    std::cout << "--------------- Animal ---------------" << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    
    Dog basic;
    {
        Dog tmp = basic;
    }

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) 
    {
        delete animals[i];
    }
    
    return 0;
}