/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:31:51 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/08 20:43:02 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	private:
		std::string name;
		int hitPoints;
		int	energyPoints;
		int	attackDamage;
	public:
		//constructors and destructors
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap& operator=(const ClapTrap& copy);
		~ClapTrap();
		//getters and setters;
		void	setName(const std::string name);
		void	setHitPoints(const unsigned int hitPoints);
		void	setEnergyPoints(const unsigned int energyPoints);
		void	setAttackDamage(const unsigned int attackDamage);
		std::string	getName(void) const;
		int	getHitPoints() const;
		int	getEnergyPoints() const;
		int	getAttackDamage() const;
		//member functions;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif