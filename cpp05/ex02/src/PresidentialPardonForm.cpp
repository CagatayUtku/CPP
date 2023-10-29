/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:30:45 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/27 13:58:38 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonFrom::PresidentialPardonFrom() : AForm("PresidentialPardonFrom", 25, 5), _target("default")
{
	std::cout<<"PresidentialPardonFrom default constructor called"<<std::endl;
}

PresidentialPardonFrom::PresidentialPardonFrom(std::string target) : AForm("PresidentialPardonFrom", 25, 5), _target(target)
{
	std::cout<<"PresidentialPardonFrom constructor called"<<std::endl;
}

PresidentialPardonFrom::PresidentialPardonFrom(const PresidentialPardonFrom& copy) : AForm(copy), _target(copy._target)
{
	std::cout<<"PresidentialPardonFrom copy constructor called"<<std::endl;
}

PresidentialPardonFrom::~PresidentialPardonFrom()
{
	std::cout<<"PresidentialPardonFrom destructor called"<<std::endl;
}

PresidentialPardonFrom& PresidentialPardonFrom::operator=(const PresidentialPardonFrom& copy)
{
	std::cout<<"PresidentialPardonFrom assignation operator called"<<std::endl;
	if (this != &copy)
	{
		_target = copy._target;
	}
	return (*this);
}

std::string	PresidentialPardonFrom::getTarget() const
{
	return (_target);
}

void	PresidentialPardonFrom::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExec())
		throw GradeTooLowException();
	else if (!getSigned())
		throw NotSignedException();
	else
		std::cout<<_target<<" has been pardoned by Zaphod Beeblebrox."<<std::endl;
}
