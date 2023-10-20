/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:50:47 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/20 11:10:46 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "ClapTrap Object created with the name : "<< this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.getName();
	this->hitPoints = copy.getHitPoints();
	this->energyPoints = copy.getEnergyPoints();
	this->attackDamage = copy.getAttackDamage();
	return (*this);
}

//getters and setters

void ClapTrap::setName(std::string name)
{
	this->name = name;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
	if (attackDamage >= 0)
		this->attackDamage = attackDamage;
	else
		this->attackDamage = 0;
}

void ClapTrap::setEnergyPoints(int	energyPoints)
{
	if (energyPoints >= 0)
		this->energyPoints = energyPoints;
	else
		this->energyPoints = 0;
}

void ClapTrap::setHitPoints(int hitPoints)
{
	if (hitPoints >= 0)
		this->hitPoints = hitPoints;
	else
		this->hitPoints = 0;
}

std::string	ClapTrap::getName(void) const
{
	return (this->name);
}

int	ClapTrap::getAttackDamage() const
{
	return (this->attackDamage);
}

int ClapTrap::getEnergyPoints() const
{
	return (this->energyPoints);
}

int	ClapTrap::getHitPoints() const
{
	return (this->hitPoints);
}

//member functions

void	ClapTrap::attack(const std::string &target)
{
	if (this->hitPoints > 0)
	{
		if (this->energyPoints > 0)
		{
			this->energyPoints--;
			std::cout<<"ClapTrap "<<this->name<<" attacks "<<target<<", causing "<<this->attackDamage<<" points of damage!"<<std::endl;
		}
		else
			std::cout<<"ClapTrap "<<this->name<<" does not have energy points to attack"<<std::endl;
	}
	else
		std::cout<<"ClapTrap "<<this->name<<" Sorry...Its too late !"<<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= 0)
	{
		if (this->hitPoints < amount)
			this->hitPoints = 0;
		else
			this->hitPoints -= amount;
		std::cout<<"ClapTrap "<<this->name<<" takes "<< amount <<" points of damage!"<<std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount >=0)
	{
		if (this->hitPoints > 0)
		{
			if (this->energyPoints > 0)
			{
				this->energyPoints--;
				this->hitPoints += amount;
				std::cout<<"ClapTrap "<<this->name<<" is repaired  "<<amount<<std::endl;
			}
			else
				std::cout<<"ClapTrap "<<this->name<<" does not have energy points"<<std::endl;
		}
		else
			std::cout<<"ClapTrap "<<this->name<<" Sorry...Its too late !"<<std::endl;
	}
}

