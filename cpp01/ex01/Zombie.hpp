/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:04:49 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/26 15:56:39 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		void announce(void);
		void	setName(std::string name);
		Zombie()
		{
			name = "";
		};
		Zombie(std::string name);
		~Zombie();
};
	Zombie* zombieHorde( int N, std::string name );

#endif