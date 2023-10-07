/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:15:16 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/03 17:39:42 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//constructor and destructor

HumanB::HumanB(std::string name) : name(name)
{
	this->weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout<<"HumanB "<<this->name<<" destroyed by deconstructor."<<std::endl;
}

//member functions

void	HumanB::attack()
{
	if (this->weapon == NULL)
		std::cout<<this->name<<" tries to attack without a weapon"<<std::endl;
	else
		std::cout<<this->name <<" attacks with his "<<this->weapon->getType()<<std::endl;
}
void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
