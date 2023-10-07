/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:04:25 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/03 16:33:49 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//constructors and destructors

Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::~Weapon()
{
	std::cout<<"Weapon "<<this->type<<" destroyed by deconstructor."<<std::endl;
};

//getters and setters

void	Weapon::setType(std::string newType)
{
	type = newType;
}

const std::string& Weapon::getType()
{
	const std::string &refType = type;
	return (refType);
}
