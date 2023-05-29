#ifndef ANIMAL_HPP
 #define ANIMAL_HPP

 #include <iostream>

 class AAnimal {

	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(std::string str);
		virtual ~AAnimal();
		AAnimal&   operator=(const AAnimal& copy);
		AAnimal(const AAnimal &copy);

	std::string getType() const;
	virtual void makeSound() const = 0;
 };

#endif