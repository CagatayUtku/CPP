/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:34:22 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/22 18:48:39 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void	PhoneBook::DisplayContacts()
{
	int	i;

	i = 0;
	while ((pbook[i].GetFirstName()).empty() != true)
	{

		std::cout<<i<<'|';
		DisplayInFormat(pbook[i].GetFirstName());
		std::cout<<'|';
		DisplayInFormat(pbook[i].GetLastName());
		std::cout<<'|';
		DisplayInFormat(pbook[i].GetNickName());
		std::cout<<std::endl;
		i++;
	}
}

void	PhoneBook::DisplayInFormat(const std::string& str)
{
	int	i;
	int	len;

	len = str.length();
	if (len > 10)
	{
		for (i = 0; i < 9; i++)
			std::cout<<str[i];
		std::cout<<'.';
	}
	else
	{
		i = 0;
		while(len + i < 10)
		{
			std::cout<<" ";
			i++;
		}
		std::cout<<str;
	}
}

void	PhoneBook::AddNewContact()
{
	static int i = 0;

	pbook[i].SetFirstName(GetInformation("First name : "));
	pbook[i].SetLastName(GetInformation("Last name : "));
	pbook[i].SetNickName(GetInformation("Nick name : "));
	pbook[i].SetPhoneNumber(GetInformation("Phone number : "));
	pbook[i].SetDarkestSecret(GetInformation("Darkest secret : "));
	i++;
	i %= 8;
}

const std::string PhoneBook::GetInformation(const std::string& str)
{
	std::string temp;

	std::cout<<str;
	getline(std::cin, temp);
	while(temp.empty())
	{
		if (std::cin.eof())
			exit (1);
		std::cout<<"This field cannot be empty."<<std::endl;
		getline(std::cin, temp);
	}
	return (temp);
};