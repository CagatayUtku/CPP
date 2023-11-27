/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:41:37 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/26 15:46:13 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
	public:
		Intern();
		Intern(const Intern &copy);
		Intern& operator=(const Intern &copy);
		~Intern();

		AForm* makeForm(std::string name, std::string target);
		class FormNotFoundException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#endif