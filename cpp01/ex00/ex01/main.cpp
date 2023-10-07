/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:11:43 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/03 16:21:55 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	std::string name;
	int	numZombies;
	Zombie *zombies;


	name = "Zombie";
	numZombies = 5;
	zombies = zombieHorde(numZombies, name);
	int	i;

	i = -1;
	while (++i < numZombies)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}
