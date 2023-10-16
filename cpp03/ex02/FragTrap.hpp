/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 08:22:30 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/16 11:31:47 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SVAVTRAP_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	//constructors and destructors
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &copy);
		FragTrap& operator=(const FragTrap &copy);
		~FragTrap();
	//member functions
		void highFivesGuys();
	//overridden functions
		void attack(const std::string& target);
};

#endif