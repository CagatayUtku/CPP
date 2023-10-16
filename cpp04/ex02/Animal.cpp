/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:10:27 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/16 16:26:18 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout<<"Animal default constructor called"<<std::endl;
}

Animal::Animal(std::string type)
{
	std::cout<<"Animal paramaterized constructor called"<<std::endl;
	this->type = type;
}

Animal::Animal(const Animal &copy)
{
	std::cout<<"Animal copy constructor called"<<std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout<<"Animal destructor called"<<std::endl;
}

Animal& Animal::operator=(const Animal &copy)
{
	this->type = copy.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::setType(std::string type)
{
	this->type = type;
}
