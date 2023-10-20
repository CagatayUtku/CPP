/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:08:18 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/20 11:10:38 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
{
	std::cout << "ScavTrap Paramaterized Constructor called"<<std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout<< "ScavTrap destructor called"<<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	this->setName(copy.getName());
	this->setAttackDamage(copy.getAttackDamage());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setHitPoints(copy.getHitPoints());
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->getHitPoints() > 0)
	{
		if (this->getEnergyPoints() > 0)
		{
			this->setEnergyPoints(getEnergyPoints() - 1);
			std::cout<<"ScavTrap "<<this->getName()<<" attacks "<<target<<", causing "<<this->getAttackDamage()<<" points of damage!"<<std::endl;
		}
		else
			std::cout<<"ScavTrap "<<this->getName()<<" does not have energy points"<<std::endl;
	}
	else
		std::cout<<"ScavTrap "<<this->getName()<<" Sorry...Its too late !"<<std::endl;
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap is now in Gate keeper mode"<<std::endl;
}
