/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:52:01 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/20 10:36:50 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap a("Zombie");
	ClapTrap b("Human");

	std::cout<<std::endl;
	std::cout<<"\033[0;93m"<<"********DEFAULT******** "<<"\033[0;39m"<<std::endl;
	std::cout<<std::endl;
	std::cout<<"\033[0;93m"<<"New HitPoint is "<<a.getHitPoints()<<"\033[0;39m"<<std::endl;
	std::cout<<"\033[0;93m"<<"Energy Point is "<<a.getEnergyPoints()<<"\033[0;39m"<<std::endl;
	std::cout<<"\033[0;93m"<<"Attack Point is "<<a.getAttackDamage()<<"\033[0;39m"<<std::endl;
	std::cout<<std::endl;

	a.setAttackDamage(3);
	b.setAttackDamage(2);
	a.attack("Human");
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(5);
	b.attack("Zombie");
	a.takeDamage(b.getAttackDamage());

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