/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:09:06 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/03 17:37:32 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
#define	HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon&		weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void	attack();
};

#endif