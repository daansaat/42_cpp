#include "Cat.hpp"
#include "Dog.hpp"

int	main(void){

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << "meta is of type " << meta->getType() << " and makes the sound ";
	meta->makeSound();
	std::cout << std::endl;
	std::cout << "i is of type " << i->getType() << " and makes the sound ";
	i->makeSound();
	std::cout << std::endl;
	std::cout << "j is of type " << j->getType() << " and makes the sound ";
	j->makeSound();
	std::cout << std::endl;
	
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;

	const WrongAnimal* wrongi = new WrongCat();
	
	std::cout << std::endl;
	std::cout << "wrongi is of type " << wrongi->getType() << " and makes the sound ";
	wrongi->makeSound();
	std::cout << std::endl;

	delete wrongi;
	
	return 0;
}