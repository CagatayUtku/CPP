/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:05:38 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/23 11:43:46 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain default constructor called"<<std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout<<"Brain copy constructor called"<<std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout<<"Brain destructor called"<<std::endl;
}

Brain& Brain::operator=(const Brain &copy)
{
	int	i;

	i = -1;
	while (++i < 100)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}
