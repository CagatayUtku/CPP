/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:11:43 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/26 16:03:56 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	std::string name;
	int	numZombies;
	Zombie *zombies;

	std::cout<<"Lets create multiple zombiess ! Give a name to them : "<<std::flush;
	if (!std::getline(std::cin, name))
	{
		std::cout<<"CTRL-D received"<<std::endl;
	}
	std::cout << "Enter the number of zombies : "<<std::flush;
	std::cin >> numZombies;
	if (std::cin.fail())
	{
		std::cout << "Invalid input. Please enter an integer" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	zombies = zombieHorde(numZombies, name);
	int	i;

	i = -1;
	while (++i < numZombies)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}