/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:54:16 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/18 11:51:12 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout<<"AMateria default constructor called"<<std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout<<"AMateria parameterized constructor called with "<< this->type<<" "<<std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout<<"AMateria copy constructor called"<<std::endl;
	*this = copy;
}
AMateria::~AMateria()
{
	std::cout<<"AMateria destructor called"<<std::endl;
}
AMateria& AMateria::operator=(const AMateria &copy)
{
	this->type = copy.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);	
}

void AMateria::use(ICharacter& target)
{	
}