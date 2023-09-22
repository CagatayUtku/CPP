/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:48:59 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/22 18:47:05 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "PhoneBook.h"

class PhoneBook
{
	private:
		Contact pbook[8];
	public:
		const std::string GetInformation(const std::string& str);
		void	AddNewContact();
		void	DisplayInFormat(const std::string& str);
		void	DisplayContacts();
};

#endif