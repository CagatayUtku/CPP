#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout<<"Dog default constructor called"<<std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(std::string type) : Animal()
{
	std::cout<<"Dog paramaterized constructor called"<<std::endl;
	this->type = type;
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal()
{
	std::cout<<"Dog copy constructor called"<<std::endl;
	this->brain = NULL;
	*this = copy;
}

Dog::~Dog()
{
	std::cout<<"Dog destructor called"<<std::endl;
	delete this->brain;
}

Dog& Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		if (this->brain != NULL)
			delete this->brain;
		this->brain = new Brain(*(copy.brain));
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout<<"Dog barks.."<<std::endl;
}
