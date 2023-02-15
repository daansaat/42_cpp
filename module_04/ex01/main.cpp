#include "Cat.hpp"
#include "Dog.hpp"

int	main(void){

{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << std::endl;
	delete j;//should not create a leak
	delete i;
}	
	std::cout << std::endl;
{
	Animal	*Animals[4];

	for (int i = 0; i < 4; i += 2) {
		Animals[i] = new Cat();
		Animals[i]->makeSound();
		std::cout << std::endl;
		Animals[i + 1] = new Dog();
		Animals[i + 1]->makeSound();
		std::cout << std::endl;
	}
	for (int i = 0; i < 4; i++) {
		delete Animals[i];
	}
}	
	std::cout << std::endl;
{
	Cat cat;

	cat.setIdeas(1, "lets eat");
	cat.setIdeas(0, "I'm Hungry");
	std::cout << "[cat] "; cat.getIdeas(); 
	std::cout << std::endl;
	Cat	*copycat = new Cat(cat);
	cat.setIdeas(3, "now");
	std::cout << "[cat] "; cat.getIdeas(); 
	std::cout << std::endl;
	std::cout << "[copycat] "; copycat->getIdeas(); 
	std::cout << std::endl;
	std::cout << std::endl;
	delete copycat;
}
	std::cout << std::endl;
{
	Dog dog;

	dog.setIdeas(1, "lets eat");
	dog.setIdeas(0, "I'm Hungry");
	std::cout << "[dog] "; dog.getIdeas(); 
	std::cout << std::endl;
	Dog	*copydog = new Dog(dog);
	dog.setIdeas(3, "now");
	std::cout << "[dog] "; dog.getIdeas(); 
	std::cout << std::endl;
	std::cout << "[copydog] "; copydog->getIdeas(); 
	std::cout << std::endl;
	std::cout << std::endl;
	delete copydog;
}
	std::cout << std::endl;
	system("leaks animals");
	return 0;
}