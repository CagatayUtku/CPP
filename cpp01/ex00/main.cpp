/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:25:54 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/24 18:51:27 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name;

	std::cout << "Creating zombie on the stack." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	if (!std::getline(std::cin, name))
	{
		std::cout<<"CTRL-D received"<<std::endl;
		return (1);
	}
	Zombie zombi1(name);
	zombi1.announce();

	std::cout << "Creating zombie on the heap." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	if (!std::getline(std::cin, name))
	{
		std::cout<<"CTRL-D received"<<std::endl;
		return (1);
	}
	Zombie *zombi2 = newZombie(name);
	zombi2->announce();
	delete zombi2;

	std::cout << "Calling randomChump() function" << std::endl;
	randomChump("randomchump");
	return 0;
}
