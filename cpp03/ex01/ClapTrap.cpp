/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:50:47 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/08 21:21:44 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "Object created with the name : "<<this->name<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout<<"Destructor called"<<std::endl;
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

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->attackDamage = attackDamage;
}

void ClapTrap::setEnergyPoints(unsigned int	energyPoints)
{
	this->energyPoints = energyPoints;
}

void ClapTrap::setHitPoints(unsigned int hitPoints)
{
	this->hitPoints = hitPoints;
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
			std::cout<<"\033[0;91m"<<"ClapTrap "<<this->name<<" attacks "<<target<<", causing "<<this->attackDamage<<" points of damage!"<<"\033[0;39m"<<std::endl;
		}
		else
			std::cout<<"ClapTrap "<<this->name<<" does not have energy points"<<std::endl;
	}
	else
		std::cout<<"ClapTrap "<<this->name<<"Sorry...Its too late !"<<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints < amount)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout<<"\033[0;91m"<<"ClapTrap "<<this->name<<" takes "<< amount <<" points of damage!"<<"\033[0;39m"<<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		if (this->energyPoints > 0)
		{
			this->energyPoints--;
			this->hitPoints += amount;
			std::cout<<"\033[0;32m"<<"ClapTrap "<<this->name<<" is repaired for "<<amount<<" points of damage!"<<"\033[0;39m"<<std::endl;
		}
		else
			std::cout<<"ClapTrap "<<this->name<<" does not have energy points"<<std::endl;
	}
	else
		std::cout<<"\033[1m"<<"ClapTrap "<<this->name<<"Sorry...Its too late !"<<"\033[0m"<<std::endl;
}

