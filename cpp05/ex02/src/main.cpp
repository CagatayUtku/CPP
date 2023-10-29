/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:00:12 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/26 16:19:12 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		//exceptions - errors
		// Bureaucrat John("John", 200);
		// Bureaucrat Frank("Frank", 5);
		// John.increment();
		// Frank.decrement();
		// Bureaucrat John("John", 1);
		// Bureaucrat Frank;

		//Normal cases
		Bureaucrat John("John", 100);
		Bureaucrat Frank("Frank", 5);
		Form Aform("paper", 50, 50);
		std::cout<<John<<Frank;

		John.decrement();
		Frank.increment();
		Aform.beSigned(John);
		// John.signForm(Aform);
		std::cout<<John<<Frank;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}