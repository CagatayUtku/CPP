/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:00:12 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/01 15:28:41 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C++
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try {
		Bureaucrat bureaucrat1("Success Bureaucrat", 1);
		Bureaucrat bureaucrat2("Fail Bureaucrat", 150);
		Intern intern;
		AForm *form1;
		AForm *form2;
		AForm *form3;
		AForm *form4;

		// PresidentialPardonForm form1("PardonForm");
		// ShrubberyCreationForm form2("ShrubberyForm");
		// RobotomyRequestForm form3("RobotomyForm");
		std::cout <<std::endl;
		form1 = intern.makeForm("presidential pardon", "PardonForm");
		std::cout <<std::endl;
		form2 = intern.makeForm("robotomy request", "RobotomyForm");
		std::cout <<std::endl;
		form3 = intern.makeForm("shrubbery creation", "ShrubberyForm");
		std::cout <<std::endl;
		form4 = intern.makeForm("blabla", "bla");
		std::cout <<std::endl;


		std::cout << bureaucrat1 << std::endl;
		std::cout << bureaucrat2 << std::endl;

		std::cout << *form1 << std::endl;
		std::cout << *form2 << std::endl;
		std::cout << *form3 << std::endl;
		std::cout << form4 << std::endl;

		std::cout <<"\nSuccessful Operations\n"<< std::endl;

		bureaucrat1.signForm(*form1);
		bureaucrat1.executeForm(*form1);
		std::cout <<std::endl;
		bureaucrat1.signForm(*form2);
		bureaucrat1.executeForm(*form2);
		std::cout <<std::endl;
		bureaucrat1.signForm(*form3);
		bureaucrat1.executeForm(*form3);

		std::cout <<"\nFail Operations\n"<< std::endl;

		bureaucrat2.signForm(*form1);
		bureaucrat2.executeForm(*form1);
		std::cout <<std::endl;
		bureaucrat2.signForm(*form2);
		bureaucrat2.executeForm(*form2);
		std::cout <<std::endl;
		bureaucrat2.signForm(*form3);
		bureaucrat2.executeForm(*form3);

		std::cout <<std::endl;

	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
