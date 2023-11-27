/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:37:44 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/26 14:53:15 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//Orthodox-Cannonical form

Form::Form() : _name("NoName"), _signed(false), _gradeToSign(1), _gradeToExec(1)
{
	std::cout<<"Form Default constructor called."<<std::endl;
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExec) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException();
	if (gradeToSign < 1 || gradeToSign < 1)
		throw Form::GradeTooHighException();
	std::cout<<"Form Parameterized constructor called."<<std::endl;
}

Form::Form(const Form &copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec)
{
	std::cout<<"Form Copy constructor called."<<std::endl;
}

Form& Form::operator=(const Form &copy)
{
	if (this != &copy)
		this->_signed = copy._signed;
	return (*this);
}

Form::~Form()
{
	std::cout<<"Form Destructor called."<<std::endl;
}

//getters

int Form::getGradeToSign() const
{
	return (_gradeToSign);
}

bool Form::getSigned() const
{
	return (_signed);
}

int Form::getGradeToExec() const
{
	return (_gradeToExec);
}

std::string Form::getName() const
{
	return (_name);
}

//member functions

void Form::beSigned(const Bureaucrat &bure)
{
	if (this->_gradeToSign >= bure.getGrade())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
	out << "Form " << form.getName() << " is ";
	if (form.getSigned())
		out << "signed and ";
	else
		out << "not signed and ";
	out << "requires grade " << form.getGradeToSign() << " to sign and grade " << form.getGradeToExec() << " to execute.";
	return (out);
}
