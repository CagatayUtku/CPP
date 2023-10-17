/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:15:26 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/17 18:27:40 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout<< "Character default constructor called."<<std::endl;
}

Character::Character(const Character &copy)
{
	std::cout<< "Character copy constructor called."<<std::endl;
	*this = copy;
}

Character& Character::operator=(const Character &copy)
{
	// this->
}

Character::~Character()
{
	std::cout<< "Character destructor called"<<std::endl;
}