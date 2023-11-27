/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:42:30 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/26 15:47:10 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout<<"Intern Default constructor called."<<std::endl;
}

Intern::Intern(const Intern &copy)
{
	std::cout<<"Intern Copy constructor called."<<std::endl;
	*this = copy;
}

Intern& Intern::operator=(const Intern &copy)
{
	(void)copy;
	return (*this);
}

Intern::~Intern()
{
	std::cout<<"Intern Destructor called."<<std::endl;
}

AForm* createPresidentialPardonForm(std::string target)
{
	std::cout << "Intern creates presidential pardon form." << std::endl;
	return new PresidentialPardonForm(target);
}

AForm* createRobotomyRequestForm(std::string target)
{
	std::cout << "Intern creates robotomy request form." << std::endl;
	return new RobotomyRequestForm(target);
}

AForm* createShrubberyCreationForm(std::string target)
{
	std::cout << "Intern creates shrubbery creation form." << std::endl;
	return new ShrubberyCreationForm(target);
}


AForm* Intern::makeForm(std::string name, std::string target)
{
	AForm* (*form[3])(std::string target) = {createPresidentialPardonForm, createRobotomyRequestForm, createShrubberyCreationForm};
	std::string formNames[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	
	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
			return (form[i](target));
	}
	throw FormNotFoundException();
}

const char* Intern::FormNotFoundException::what() const throw()
{
	return ("Form not found.");
}
