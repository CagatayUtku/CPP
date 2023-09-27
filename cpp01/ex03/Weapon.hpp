/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:04:43 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/27 15:37:40 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define	WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		~Weapon()
		{
			std::cout<<"Weapon "<<this->type<<" destroyed by deconstructor."<<std::endl;
		};
		const std::string& getType();
		void	setType(std::string newType);
};

#endif