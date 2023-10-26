/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:54:16 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/23 13:32:58 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout<<"AMateria default constructor called"<<std::endl;
}

AMateria::AMateria(std::string const & type)
{
	std::cout<<"AMateria parameterized constructor called with "<< this->type<<" "<<std::endl;
	this->type = type;
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
	std::cout<<"AMateria base called with"<<target.getName()<<" called"<<std::endl;
}