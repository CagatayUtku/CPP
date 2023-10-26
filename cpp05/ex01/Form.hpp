/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:59:27 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/26 15:27:49 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool 				_signed;
		const int	 		_gradeToSign;
		const int			_gradeToExec;
	public:
	//Orthodox-Cannonical form
		Form();
		Form(const std::string name, const int gradeToSign, const int gradeToExec);
		Form(const Form &copy);
		~Form();
		Form& operator=(const Form &copy);
	//getters
		std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		bool getSigned() const;
	//member_functions
		bool beSigned(const Bureaucrat &bure);
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
};

#endif