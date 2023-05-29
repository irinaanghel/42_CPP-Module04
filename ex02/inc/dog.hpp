#ifndef DOG_HPP
# define DOG_HPP

# include "aanimal.hpp"
# include "brain.hpp"

class Dog : public AAnimal
{
	protected:
		Brain* brain;

	public:
		Dog();
		virtual ~Dog();
		Dog&   operator=(const Dog& copy);
		Dog(const Dog &copy);
		
		void makeSound() const;
};

#endif