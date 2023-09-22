/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:58:04 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/22 18:00:21 by Cutku            ###   ########.fr       */
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
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (1);
		else if (str.compare("EXIT") == 0)
			return (0);
		else if (str.compare("ADD") == 0)
			deneme.AddNewContact();
		else if (str.compare("SEARCH") == 0)
			deneme.DisplayContacts();
		else
			std::cout<<"Wrong operation. Try again."<<std::endl;
	}
	return (0);
}