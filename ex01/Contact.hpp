/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:35:01 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/19 19:03:27 by Cutku            ###   ########.fr       */
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
		void	SetFirstName(std::string str); 
		void	SetLastName(char *str); 
		void	SetNickName(char *str); 
		void	SetPhoneNumber(char *str);
		void	SetDarkestSecret(char *str);
		void	GetFirstName();
		// Contact();
		// ~Contact();
};

#endif