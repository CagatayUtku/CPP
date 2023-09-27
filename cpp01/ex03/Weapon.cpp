/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:04:25 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/27 15:06:30 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string newType)
{
	type = newType;
}

const std::string& Weapon::getType()
{
	const std::string &refType = type;
	return (refType);
}
Weapon::Weapon(std::string type) : type(type)
{
	
}