/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:10:53 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/03 17:36:09 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
	
}

HumanA::~HumanA()
{
	std::cout<<"HumanA "<<this->name<<" destroyed by deconstructor."<<std::endl;
};

void	HumanA::attack()
{
	std::cout<<this->name<<" attacks with his "<<weapon.getType()<<std::endl;
}
