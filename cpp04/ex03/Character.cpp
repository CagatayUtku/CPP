/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:15:26 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/23 13:54:23 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	int i;

	std::cout<< "Character default constructor called."<<std::endl;
	i = -1;
	while (++i < 4)
		this->inventory[i] = NULL;
}

Character::Character(std::string name) : name(name)
{	
	int i;

	std::cout<< "Character parameterized constructor called with "<<this->name<<std::endl;
	i = -1;
	while (++i < 4)
		this->inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
	std::cout<< "Character copy constructor called."<<std::endl;
	*this = copy;
}

Character& Character::operator=(const Character &copy)
{
	int	i;

	if (this != &copy)
	{
		this->name = copy.getName();
		//clean up whatever inside
		i = -1;
		while (++i < 4)
		{
			if (this->inventory[i])
			{
				delete this->inventory[i];
				this->inventory[i] = NULL;
			}
		}
		i = -1;
		while(++i < 4)
			if (copy.inventory[i])
				this->inventory[i] = copy.inventory[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
	int i;

	std::cout<< "Character destructor called with "<<this->name<<std::endl;
	i = 0;
	while (i < 4)
	{
		if (this->inventory[i])
		{
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
		i++;
	}
}

void Character::equip(AMateria *m)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->inventory[idx] == NULL)
		return ;
	this->inventory[idx] = NULL;
}

AMateria* Character::getEquipment(int idx)
{
	if (idx >= 0 && idx < 4)
		return (this->inventory[idx]);
	return (0);
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}

std::string const & Character::getName() const
{
	return(this->name);
}
