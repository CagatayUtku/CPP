/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:03:54 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/17 17:04:23 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout<< "Cure default constructor called"<<std::endl;
}

Cure::Cure(const Cure &copy)
{
	std::cout<< "Cure copy constructor called"<<std::endl;
	*this = copy;
}

Cure& Cure::operator=(const Cure &copy)
{
	this->type = copy.type;
	return (*this);
}

Cure::~Cure()
{
	std::cout<< "Cure destructor called"<<std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *base;

	base = new Cure(*this);
	return (base);
}

void Cure::use(ICharacter& target)
{
	std::cout<<"* heals "<<target.getName()<<"' wounds *"<<std::endl;	
}
