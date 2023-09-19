/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:58:04 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/19 19:13:43 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

int	main(void)
{
	Contact x;
	std::string str;

	std::cout<<"Please type the operation that you want to do."<<std::endl;
	std::cout<<"Choices are : ADD / SEARCH / EXIT"<<std::endl;
	std::cin>>str;
	x.SetFirstName(str);
	x.GetFirstName();

	return (0);
}