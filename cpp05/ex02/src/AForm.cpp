/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:37:44 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/27 13:57:34 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//Orthodox-Cannonical form

AForm::AForm() : _name("NoName"), _signed(false), _gradeToSign(1), _gradeToExec(1)
{
	std::cout<<"AForm Default constructor called."<<std::endl;
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExec) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign > 150 || gradeToExec > 150)
		throw AForm::GradeTooLowException();
	if (gradeToSign < 1 || gradeToSign < 1)
		throw AForm::GradeTooHighException();
	std::cout<<"AForm Default constructor called."<<std::endl;
}

AForm::AForm(const AForm &copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec)
{
	std::cout<<"AForm Copy constructor called."<<std::endl;
}

AForm& AForm::operator=(const AForm &copy)
{
	this->_signed = copy._signed;
	return (*this);
}

AForm::~AForm()
{
	std::cout<<"AForm Destructor called."<<std::endl;
}

//getters

int AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

bool AForm::getSigned() const
{
	return (_signed);
}

int AForm::getGradeToExec() const
{
	return (_gradeToExec);
}

std::string AForm::getName() const
{
	return (_name);
}

//member functions

bool AForm::beSigned(const Bureaucrat &bure)
{
	if (this->_gradeToSign >= bure.getGrade())
	{
		this->_signed = true;
		return (true);
	}
	else
		throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

const char* AForm::NotSignedException::what() const throw()
{
	return ("Form is not signed.");
}
