/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:26:46 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/26 15:28:40 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("NoTarget")
{
	std::cout<<"RobotomyRequestForm default constructor called"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout<<"RobotomyRequestForm constructor called"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy)
{
	std::cout<<"RobotomyRequestForm copy constructor called"<<std::endl;
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout<<"RobotomyRequestForm destructor called"<<std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	std::cout<<"RobotomyRequestForm assignation operator called"<<std::endl;
	if (this != &copy)
	{
		this->_target = copy._target;
	}
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::cout<<"Some drilling noises"<<std::endl;
	std::srand(std::time(NULL));
	if (std::rand() % 2 == 0)
		std::cout<<this->_target<<" has been robotomized successfully"<<std::endl;
	else
		std::cout<<"Robotomization of "<<this->_target<<" failed"<<std::endl;
}
