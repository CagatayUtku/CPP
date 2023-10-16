/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:08:18 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/16 11:31:43 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Paramaterized Constructor called"<<std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout<< "FragTrap destructor called"<<std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
	this->setName(copy.getName());
	this->setAttackDamage(copy.getAttackDamage());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setHitPoints(copy.getHitPoints());
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	if (this->getHitPoints() > 0)
	{
		if (this->getEnergyPoints() > 0)
		{
			this->setEnergyPoints(getEnergyPoints() - 1);
			std::cout<<"\033[0;91m"<<"FragTrap "<<this->getName()<<" attacks "<<target<<", causing "<<this->getAttackDamage()<<" points of damage!"<<"\033[0;39m"<<std::endl;
		}
		else
			std::cout<<"FragTrap "<<this->getName()<<" does not have energy points"<<std::endl;
	}
	else
		std::cout<<"FragTrap "<<this->getName()<<"Sorry...Its too late !"<<std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout<<"FragTrap give me a high five"<<std::endl;
}
