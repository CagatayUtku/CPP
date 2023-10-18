/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:41:39 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/18 14:18:15 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int i;

	i = -1;
	while (++i < 4)
		this->learned[i] = NULL;
	std::cout<< "MateriaSource default constructor called."<<std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout<< "MateriaSource copy constructor called."<<std::endl;
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &copy)
{
	int	i;

	if (this != &copy)
	{
		//clean up whatever inside
		i = -1;
		while (++i < 4)
		{
			if (this->learned[i])
			{
				delete this->learned[i];
				this->learned[i] = NULL;
			}
		}
		i = -1;
		while(++i < 4)
			if (copy.learned[i])
				this->learned[i] = copy.learned[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (this->learned[i])
		{
			delete this->learned[i];
			this->learned[i] = NULL;
		}
		i++;
	}
	std::cout<< "MateriaSource destructor called."<<std::endl;
}

void MateriaSource::learnMateria(AMateria* whatever)
{
	int	i;

	i = 0;
	while(i < 4)
	{
		if (this->learned[i] == NULL)
		{
			this->learned[i] = whatever->clone();
			return ;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i;
	AMateria *temp;

	i = 0;
	while(i < 4)
	{
		if (this->learned[i] && this->learned[i]->getType() == type)
		{
			temp =  this->learned[i]->clone();
			return (temp);
		}
		i++;
	}
	return (0);
}
