#ifndef WRONG_HPP
# define WRONG_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal&   operator=(const WrongAnimal& copy);
		WrongAnimal(const WrongAnimal &copy);

		std::string getType() const;
		void makeSound() const;
};

#endif