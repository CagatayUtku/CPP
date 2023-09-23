/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:46:41 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/22 17:38:09 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void	Contact::SetFirstName(const std::string& str)
{
	// if (!(str.empty()))
		FirstName = str;
}

const std::string Contact::GetFirstName()
{
	return(FirstName);
}

void	Contact::SetLastName(const std::string& str)
{
	if (!(str.empty()))
		LastName = str;
}

const std::string	Contact::GetLastName()
{
	return(LastName);
}

void	Contact::SetNickName(const std::string& str)
{
	if (!(str.empty()))
		NickName = str;
}

const std::string Contact::GetNickName()
{
	return(NickName);
}

void	Contact::SetPhoneNumber(const std::string& str)
{
	if (!(str.empty()))
		PhoneNumber = str;
}

const std::string Contact::GetPhoneNumber()
{
	return (PhoneNumber);
}

void	Contact::SetDarkestSecret(const std::string& str)
{
	if (!(str.empty()))
		DarkestSecret = str;
}
const std::string Contact::GetDarkestSecret()
{
	return (DarkestSecret);
}