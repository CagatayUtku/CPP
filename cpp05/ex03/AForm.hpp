/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:59:27 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/01 13:12:07 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool 				_signed;
		const int	 		_gradeToSign;
		const int			_gradeToExec;
	public:
	//Orthodox-Cannonical form
		AForm();
		AForm(const std::string name, const int gradeToSign, const int gradeToExec);
		AForm(const AForm &copy);
		virtual ~AForm();
		AForm& operator=(const AForm &copy);
	//getters
		std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		bool getSigned() const;
	//member_functions
		bool beSigned(const Bureaucrat &bure);
		virtual void execute(Bureaucrat const & executor) const = 0;
	//error-exception classes
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	class NotSignedException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif