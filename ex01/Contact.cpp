/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:46:41 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/19 19:18:12 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void	Contact::SetFirstName(std::string str)
{
	if (str && strlen(str))
		FirstName = str;
	else
		std::cout<<"Name cannot be empty\n";
}

void	Contact::GetFirstName()
{
	std::cout<<FirstName;
}