/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:52:01 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/20 11:09:56 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap a("Zombie");
	ScavTrap b("Human");

	std::cout<<std::endl;
	std::cout<<"\033[0;93m"<<"********DEFAULT******** "<<"\033[0;39m"<<std::endl;
	std::cout<<std::endl;
	std::cout<<"\033[0;93m"<<"New HitPoint is "<<a.getHitPoints()<<"\033[0;39m"<<std::endl;
	std::cout<<"\033[0;93m"<<"Energy Point is "<<a.getEnergyPoints()<<"\033[0;39m"<<std::endl;
	std::cout<<"\033[0;93m"<<"Attack Point is "<<a.getAttackDamage()<<"\033[0;39m"<<std::endl;
	std::cout<<std::endl;

	a.setAttackDamage(30);
	b.setAttackDamage(20);
	a.attack("Human");
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(50);
	b.attack("Zombie");
	a.takeDamage(b.getAttackDamage());
	b.guardGate();

	std::cout<<std::endl<<"\033[0;93m"<<"********ZOMBIE******** "<<"\033[0;39m"<<std::endl;
	std::cout<<std::endl;
	std::cout<<"\033[0;93m"<<"New HitPoint is "<<a.getHitPoints()<<"\033[0;39m"<<std::endl;
	std::cout<<"\033[0;93m"<<"Energy Point is "<<a.getEnergyPoints()<<"\033[0;39m"<<std::endl;
	std::cout<<"\033[0;93m"<<"Attack Point is "<<a.getAttackDamage()<<"\033[0;39m"<<std::endl;
	std::cout<<std::endl;
	std::cout<<"\033[0;93m"<<"********HUMAN******** "<<"\033[0;39m"<<std::endl;
	std::cout<<std::endl;
	std::cout<<"\033[0;93m"<<"New HitPoint is "<<b.getHitPoints()<<"\033[0;39m"<<std::endl;
	std::cout<<"\033[0;93m"<<"Energy Point is "<<b.getEnergyPoints()<<"\033[0;39m"<<std::endl;
	std::cout<<"\033[0;93m"<<"Attack Point is "<<a.getAttackDamage()<<"\033[0;39m"<<std::endl<<std::endl;

	return (0);
}