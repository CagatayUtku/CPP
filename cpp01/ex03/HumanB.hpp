/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:14:33 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/27 15:37:23 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
#define	HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon*		weapon;
	public:
		HumanB(std::string name);
		~HumanB()
		{
			std::cout<<"HumanB "<<this->name<<" destroyed by deconstructor."<<std::endl;
		};
		void	attack();
		void	setWeapon(Weapon& weapon);
};

#endif