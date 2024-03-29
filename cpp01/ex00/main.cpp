/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:25:54 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/03 16:03:26 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	//Zombie
	Zombie zombi1("Zombi1");
	zombi1.announce();
	//newZombie
	Zombie *zombi2 = newZombie("Zombi2");
	zombi2->announce();
	delete zombi2;
	//randomChump
	randomChump("randomchump");
	return 0;
}
