/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:44:41 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/16 16:14:31 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout<<"Cat default constructor called"<<std::endl;
}

Cat::Cat(std::string type)
{
	std::cout<<"Cat paramaterized constructor called"<<std::endl;
	this->type = type;
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	std::cout<<"Cat copy constructor called"<<std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout<<"Cat destructor called"<<std::endl;
	delete this->brain;
}

Cat& Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	this->brain = copy.brain;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout<<"Cat makes miaoovvv"<<std::endl;
}
