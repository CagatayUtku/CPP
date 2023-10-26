/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:44:41 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/23 11:47:04 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout<<"Cat default constructor called"<<std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(std::string type) : Animal()
{
	std::cout<<"Cat paramaterized constructor called"<<std::endl;
	this->type = type;
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal()
{
	std::cout<<"Cat copy constructor called"<<std::endl;
	// this->brain = new Brain();
	*this = copy;
}

Cat::~Cat()
{
	std::cout<<"Cat destructor called"<<std::endl;
	delete this->brain;
}

Cat& Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain();
		this->brain = copy.brain;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout<<"Cat makes miaoovvv"<<std::endl;
}
