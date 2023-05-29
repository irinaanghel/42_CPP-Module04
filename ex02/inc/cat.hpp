#ifndef CAT_HPP
# define CAT_HPP

# include "aanimal.hpp"
# include "brain.hpp"

class Cat : public AAnimal
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