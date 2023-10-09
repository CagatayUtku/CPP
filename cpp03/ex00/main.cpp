/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:52:01 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/08 21:23:15 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap a("Zombie");

	a.attack("You");
	std::cout<<"\033[0;93m"<<"Remaining Energy Point is "<<a.getEnergyPoints()<<"\033[0;39m"<<std::endl;
	a.beRepaired(5);
	a.takeDamage(12);
	// std::cout<<"\033[0;93m"<<"New HitPoint is "<<a.getHitPoints()<<"\033[0;39m"<<std::endl;
	// std::cout<<"\033[0;93m"<<"New HitPoint is "<<a.getHitPoints()<<"\033[0;39m"<<std::endl;
	// std::cout<<"\033[0;93m"<<"Remaining Energy Point is "<<a.getEnergyPoints()<<"\033[0;39m"<<std::endl;
	a.setAttackDamage(20);
	a.attack("Someone else");

	return (0);
}