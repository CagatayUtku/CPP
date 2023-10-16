/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 08:22:30 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/16 10:48:59 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SVAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	//constructors and destructors
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap& operator=(const ScavTrap &copy);
		~ScavTrap();
	//member functions
		void guardGate();
	//overridden functions
		void attack(const std::string& target);
};

#endif