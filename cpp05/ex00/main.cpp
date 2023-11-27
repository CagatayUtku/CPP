/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:00:12 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/26 13:43:43 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		//exceptions - errors
		// Bureaucrat Frank("Frank", -5);
		// Bureaucrat John("John", 200);
		// John.increment();
		// Frank.decrement();

		//Normal cases
		Bureaucrat John("John", 100);
		Bureaucrat Frank("Frank", 1);
		std::cout<<John<<Frank;

		John.decrement();
		Frank.increment();
		std::cout<<John<<Frank;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}