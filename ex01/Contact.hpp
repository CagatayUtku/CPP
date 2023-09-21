/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:35:01 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/21 17:36:59 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.h"

class Contact
{
	private:
		std::string FirstName; 
		std::string LastName; 
		std::string NickName; 
		std::string PhoneNumber; 
		std::string DarkestSecret;
	public:
		void	SetFirstName(const std::string& str); 
		void	SetLastName(const std::string& str); 
		void	SetNickName(const std::string& str); 
		void	SetPhoneNumber(const std::string& str);
		void	SetDarkestSecret(const std::string& str);
		void	GetFirstName();
		Contact();
		~Contact();
};

#endif