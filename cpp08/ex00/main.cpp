/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:49:37 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/07 13:03:10 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main (void)
{
	std::vector<int>	vector_;
	std::list<int>		list_;

	vector_.push_back(100);
	vector_.push_back(200);
	list_.push_back(2);
	list_.push_front(4);

	try
	{
		std::cout << *easyfind(vector_, 100) << std::endl;
		std::cout << *easyfind(list_, 2) << std::endl;
		std::cout << *easyfind(list_, 4) << std::endl;
		std::cout << *easyfind(list_, 2) << std::endl;
		std::cout << *easyfind(vector_, 250) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Not found" << std::endl;
	}
	return (0);
}