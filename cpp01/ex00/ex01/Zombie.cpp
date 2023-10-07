/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:08:36 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/03 16:14:15 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::~Zombie(void)
{
	std::cout<<this->name<<" is destroyed"<<std::endl;	
}
