/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:46:41 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/21 17:51:21 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void	Contact::SetFirstName(const std::string& str)
{
	if (!(str.empty()))
		FirstName = str;
	else
		std::cout<<"First name cannot be empty"<<std::endl;
}

void	Contact::GetFirstName()
{
	std::cout<<FirstName;
}

void	Contact::SetLastName(const std::string& str)
{
	if (!(str.empty()))
		LastName = str;
	else
		std::cout<<"Last name cannot be empty"<<std::endl;
}

void	Contact::GetLastName()
{
	std::cout<<LastName;
}

void	Contact::SetNickName(const std::string& str)
{
	if (!(str.empty()))
		NickName = str;
	else
		std::cout<<"Nick name cannot be empty"<<std::endl;
}

void	Contact::GetNickName()
{
	std::cout<<NickName;
}

void	Contact::SetPhoneNumber(const std::string& str)
{
	if (!(str.empty()))
	{
		if (str.isdigit())
		FirstName = str;
	}
	else
		std::cout<<"Name cannot be empty"<<std::endl;
}

void	Contact::GetPhoneNumber()
{
	std::cout<<PhoneNumber;
}
