#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout<<"Dog default constructor called"<<std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string type) : Animal()
{
	std::cout<<"Dog paramaterized constructor called"<<std::endl;
	this->type = type;
}

Dog::Dog(const Dog &copy) : Animal()
{
	std::cout<<"Dog copy constructor called"<<std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout<<"Dog destructor called"<<std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout<<"Dog barks.."<<std::endl;
}
