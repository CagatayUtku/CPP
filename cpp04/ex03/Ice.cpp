/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:20:22 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/23 13:36:33 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout<< "Ice default constructor called"<<std::endl;
}

Ice::Ice(const Ice &copy) : AMateria()
{
	std::cout<< "Ice copy constructor called"<<std::endl;
	*this = copy;
}

Ice& Ice::operator=(const Ice &copy)
{
	this->type = copy.type;
	return (*this);
}

Ice::~Ice()
{
	std::cout<< "Ice destructor called"<<std::endl;
}

AMateria* Ice::clone() const
{
	AMateria *base;

	base = new Ice(*this);
	return (base);
}

void Ice::use(ICharacter& target)
{
	std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;	
}
