#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout<<"WrongAnimal default constructor called"<<std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout<<"WrongAnimal paramaterized constructor called"<<std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout<<"WrongAnimal copy constructor called"<<std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<"WrongAnimal destructor called"<<std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->type = copy.type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void WrongAnimal::makeSound() const
{
	std::cout<<"WrongAnimal makes some sound"<<std::endl;
}
