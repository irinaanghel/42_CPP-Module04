#ifndef CAT_HPP
# define CAT_HPP

# include "animal.hpp"
# include "brain.hpp"

class Cat : public Animal
{
	protected:
		Brain* brain;

	public:
		Cat();
		 virtual ~Cat();
		Cat&   operator=(const Cat& copy);
		Cat(const Cat &copy);
		
		void makeSound() const;
};

#endif