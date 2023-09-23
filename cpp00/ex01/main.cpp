/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:58:04 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/23 18:20:30 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

int	main(void)
{
	std::string str;
	PhoneBook deneme;

	while (1)
	{
		std::cout<<"Please type the operation that you want to do."<<std::endl;
		std::cout<<"Choices are : ADD / SEARCH / EXIT"<<std::endl;
		if (!std::getline(std::cin, str))
		{
			std::cerr << "Error: CTRL-D received" << std::endl;
			return (1);
		}
		else if (str.compare("EXIT") == 0)
			return (0);
		else if (str.compare("ADD") == 0)
			deneme.AddNewContact();
		else if (str.compare("SEARCH") == 0)
			deneme.SearchContacts();
		else
			std::cerr<<"Wrong operation. Try again."<<std::endl;
	}
	return (0);
}
