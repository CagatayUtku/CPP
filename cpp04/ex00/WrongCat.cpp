/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:15:39 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/16 13:16:02 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout<<"WrongCat default constructor called"<<std::endl;
}

WrongCat::WrongCat(std::string type)
{
	std::cout<<"WrongCat paramaterized constructor called"<<std::endl;
	this->type = type;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout<<"WrongCat copy constructor called"<<std::endl;
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout<<"WrongCat destructor called"<<std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{
	this->type = copy.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout<<"WrongCat makes miaoovvv"<<std::endl;
}
