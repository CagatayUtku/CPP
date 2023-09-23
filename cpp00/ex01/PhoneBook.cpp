/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:34:22 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/23 18:48:05 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

const std::string PhoneBook::GetInformation(const std::string& str)
{
	std::string temp;

	std::cout<<str;
	if (!std::getline(std::cin, temp))
	{
		std::cerr << "Error: CTRL-D received" << std::endl;
		exit (1);
	}
	while(temp.empty())
	{
		std::cout<<"This field cannot be empty."<<std::endl;
		if (!std::getline(std::cin, temp))
		{
			std::cerr << "Error: CTRL-D received" << std::endl;
			exit (1);
		}
	}
	return (temp);
};

void	PhoneBook::AddNewContact()
{
	static int i = 0;

	pbook[i].SetFirstName(GetInformation("First name : "));
	pbook[i].SetLastName(GetInformation("Last name : "));
	pbook[i].SetNickName(GetInformation("Nick name : "));
	pbook[i].SetPhoneNumber(GetInformation("Phone number : "));
	pbook[i].SetDarkestSecret(GetInformation("Darkest secret : "));
	i++;
	i = i % 8;
}

void	PhoneBook::ShowContacts()
{
	int	i;

	i = 0;
	while ((pbook[i].GetFirstName()).empty() != true && i < 8)
	{

		std::cout<<"         "<<i + 1<<'|';
		DisplayInFormat(pbook[i].GetFirstName());
		std::cout<<'|';
		DisplayInFormat(pbook[i].GetLastName());
		std::cout<<'|';
		DisplayInFormat(pbook[i].GetNickName());
		std::cout<<std::endl;
		i++;
	}
}

void	PhoneBook::SearchContacts()
{
	std::string input;
	int index = -1;
	bool valid_input = false;

	if ((pbook[0].GetFirstName()).empty() == true)
	{
		std::cerr<<"Phonebook is empty."<<std::endl;
		return ;
	}
	ShowContacts();
	while (!valid_input)
	{
		std::cout << "Enter the index number that you want to see: ";
		if (!std::getline(std::cin, input))
		{
			std::cerr << "Error: CTRL-D received" << std::endl;
			exit(1);
		}
		try
		{
			index = std::stoi(input);
			if (index >= 1 && index <= 8 && !(pbook[index - 1].GetFirstName()).empty())
			{
				valid_input = true;
				DisplayChoosen(index - 1);
			}
			else
				std::cerr << "Error: Invalid index" << std::endl;
		}
		catch(...)
		{
			std::cerr << "Error: Invalid Argument."<< std::endl;
		}
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

void	PhoneBook::DisplayChoosen(int	index)
{
	std::cout<<pbook[index].GetFirstName()<<std::endl;
	std::cout<<pbook[index].GetLastName()<<std::endl;
	std::cout<<pbook[index].GetNickName()<<std::endl;
	std::cout<<pbook[index].GetPhoneNumber()<<std::endl;
	std::cout<<pbook[index].GetDarkestSecret()<<std::endl;
}